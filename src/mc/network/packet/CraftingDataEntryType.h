#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CraftingDataEntryType : int {
    ShapelessRecipe          = 0,
    ShapedRecipe             = 1,
    MultiRecipe              = 4,
    UserDataShapelessRecipe  = 5,
    ShapelessChemistryRecipe = 6,
    ShapedChemistryRecipe    = 7,
    SmithingTransformRecipe  = 8,
    SmithingTrimRecipe       = 9,
    Count                    = 10,
};
