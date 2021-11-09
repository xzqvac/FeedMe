#include "filter.h"

Filter::Filter(QObject *parent) : QSortFilterProxyModel(parent)
{
    total_added = 0;
    total_passed = 0;
    total_processed = 0;
    total_pages = 0;
    regxpattern = "";
    setCurrentPage(0);
    setPageData(false);
    setPageSize(100);
}

bool Filter::pageData()
{
    return pagedata;
}

void Filter::setPageData(bool value)
{
    pagedata = value;
    qDebug() << "Page data: " << pagedata;
}

int Filter::pageSize()
{
    return pagesize;
}

void Filter::setPageSize(int value)
{
    pagesize = value;
    qDebug() << "Page size: " << pagesize;
}

int Filter::pageCount()
{
    if(!pagedata) return -1;
    return total_pages;
}

void Filter::filterPaged(QString pattern)
{
    regxpattern = pattern;
    search();
}

int Filter::currentPage()
{
    return currentpage;
}

void Filter::setCurrentPage(int value)
{
    currentpage = value;
    search();
}

void Filter::back()
{
    currentpage--;
    if(currentpage < 0) currentpage = 0;
    search();
}

void Filter::next()
{
    currentpage++;
    if(currentpage > total_pages) currentpage = total_pages;
    search();
}

bool Filter::filterAcceptsRow(int source_row, const QModelIndex &source_parent) const
{
    QModelIndex index = sourceModel()->index(source_row, filterKeyColumn(), source_parent);

    if(!sourceModel()->data(index).toString().contains(filterRegularExpression()))
        return process(false, false, "Failed to filter");

    if(!pagedata) return process(true, true, "Not paging");

    if(total_added >= pagesize) return process(false, true, "Not in page range");

    if(total_passed >= min && total_passed < max)
        return process(true, true, "In page range");

    return process(false, false, "Defult");
}

void Filter::search()
{
    total_added = 0;
    total_passed = 0;
    total_processed = 0;
    total_pages = 0;
    min = currentpage * pagesize;
    max = min + pagesize;
    emit started();
    setFilterRegularExpression(regxpattern);
}

bool Filter::process(bool allowed, bool countonly, QString reason) const
{
    total_processed++;
    if(allowed == true && countonly == false) total_added++;
    if(countonly)
    {
        total_passed++;
        total_pages = total_passed / pagesize;
    }

    qInfo() << "Zezwolono: " << allowed << reason;
    if(total_processed >= sourceModel()->rowCount()) emit finished();

    return allowed;
}
