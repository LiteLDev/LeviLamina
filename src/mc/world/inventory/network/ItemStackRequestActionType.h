#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ItemStackRequestActionType : uchar {
    Take                                    = 0,
    Place                                   = 1,
    Swap                                    = 2,
    Drop                                    = 3,
    Destroy                                 = 4,
    Consume                                 = 5,
    Create                                  = 6,
    PlaceInItemContainerDeprecated          = 7,
    TakeFromItemContainerDeprecated         = 8,
    ScreenLabTableCombine                   = 9,
    ScreenBeaconPayment                     = 10,
    ScreenHUDMineBlock                      = 11,
    CraftRecipe                             = 12,
    CraftRecipeAuto                         = 13,
    CraftCreative                           = 14,
    CraftRecipeOptional                     = 15,
    CraftRepairAndDisenchant                = 16,
    CraftLoom                               = 17,
    CraftNonImplementedDeprecatedasktylaing = 18,
    CraftResultsDeprecatedasktylaing        = 19,
};
