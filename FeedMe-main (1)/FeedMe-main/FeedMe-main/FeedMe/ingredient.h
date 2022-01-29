#ifndef INGREDIENT_H
#define INGREDIENT_H

#include <QTextStream>

class Ingredient
{
public:
    Ingredient();
    QString amount, name;
    int recipeID, ingredientID;
};

#endif // INGREDIENT_H
