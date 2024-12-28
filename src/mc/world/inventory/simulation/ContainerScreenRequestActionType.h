#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ContainerScreenRequestActionType : uchar {
    Take                = 0,
    Place               = 1,
    Swap                = 2,
    Drop                = 3,
    Destroy             = 4,
    Consume             = 5,
    Create              = 6,
    LabTableCombine     = 7,
    BeaconPayment       = 8,
    MineBlock           = 9,
    CraftRecipe         = 10,
    CraftRecipeAuto     = 11,
    CraftCreative       = 12,
    CraftRecipeOptional = 13,
};
