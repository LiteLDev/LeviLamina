#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class RecipeType : uchar {
    Invalid           = 0,
    Shaped            = 1,
    Shapeless         = 2,
    Furnace           = 3,
    BrewingMix        = 4,
    BrewingContainer  = 5,
    MaterialReduction = 6,
    SmithingTransform = 7,
    SmithingTrim      = 8,
    Count             = 9,
};
