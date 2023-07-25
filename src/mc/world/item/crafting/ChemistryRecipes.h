#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChemistryRecipes {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHEMISTRYRECIPES
public:
    ChemistryRecipes& operator=(ChemistryRecipes const&) = delete;
    ChemistryRecipes(ChemistryRecipes const&)            = delete;
    ChemistryRecipes()                                   = delete;
#endif

public:
    /**
     * @symbol ?addRecipes\@ChemistryRecipes\@\@SAXAEAVRecipes\@\@\@Z
     */
    MCAPI static void addRecipes(class Recipes&);
};
