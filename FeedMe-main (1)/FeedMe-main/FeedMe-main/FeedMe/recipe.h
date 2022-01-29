#ifndef RECIPE_H
#define RECIPE_H

#include <QTextStream>
#include "ingredient.h"

class Recipe
{
public:
    Recipe();
     QString name, instructions;
     std::vector <Ingredient> ingredients;
     int recipeID;
};

#endif // RECIPE_H
