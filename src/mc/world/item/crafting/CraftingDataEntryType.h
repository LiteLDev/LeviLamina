#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CraftingDataEntryType : int {
    ShapelessRecipe          = 0x0,
    ShapedRecipe             = 0x1,
    FurnaceRecipe            = 0x2,
    FurnaceAuxRecipe         = 0x3,
    MultiRecipe              = 0x4,
    ShulkerBoxRecipe         = 0x5,
    ShapelessChemistryRecipe = 0x6,
    ShapedChemistryRecipe    = 0x7,
    SmithingTransformRecipe  = 0x8,
    SmithingTrimRecipe       = 0x9,
};
