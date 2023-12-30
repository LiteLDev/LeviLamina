#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChemistryRecipes {
public:
    // prevent constructor by default
    ChemistryRecipes& operator=(ChemistryRecipes const&);
    ChemistryRecipes(ChemistryRecipes const&);
    ChemistryRecipes();

public:
    // NOLINTBEGIN
    // symbol: ?addRecipes@ChemistryRecipes@@SAXAEAVRecipes@@@Z
    MCAPI static void addRecipes(class Recipes& r);

    // NOLINTEND
};
