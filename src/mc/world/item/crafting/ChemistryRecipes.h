#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Recipes;
// clang-format on

class ChemistryRecipes {
public:
    // prevent constructor by default
    ChemistryRecipes& operator=(ChemistryRecipes const&);
    ChemistryRecipes(ChemistryRecipes const&);
    ChemistryRecipes();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void addRecipes(::Recipes& r);
    // NOLINTEND
};
