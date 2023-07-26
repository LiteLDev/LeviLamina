#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChemistryRecipes {

public:
    // prevent constructor by default
    ChemistryRecipes& operator=(ChemistryRecipes const&) = delete;
    ChemistryRecipes(ChemistryRecipes const&)            = delete;
    ChemistryRecipes()                                   = delete;

public:
    /**
     * @symbol ?addRecipes\@ChemistryRecipes\@\@SAXAEAVRecipes\@\@\@Z
     */
    MCAPI static void addRecipes(class Recipes&); // NOLINT
};
