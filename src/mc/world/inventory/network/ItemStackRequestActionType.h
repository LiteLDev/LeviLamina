#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ItemStackRequestActionType : uchar {
    Take                                     = 0x0,
    Place                                    = 0x1,
    Swap                                     = 0x2,
    Drop                                     = 0x3,
    Destroy                                  = 0x4,
    Consume                                  = 0x5,
    Create                                   = 0x6,
    PlaceInItemContainer                     = 0x7,
    TakeFromItemContainer                    = 0x8,
    ScreenLabTableCombine                    = 0x9,
    ScreenBeaconPayment                      = 0xA,
    ScreenHUDMineBlock                       = 0xB,
    CraftRecipe                              = 0xC,
    CraftRecipeAuto                          = 0xD,
    CraftCreative                            = 0xE,
    CraftRecipeOptional                      = 0xF,
    CraftRepairAndDisenchant                 = 0x10,
    CraftLoom                                = 0x11,
    CraftNonImplemented_DEPRECATEDASKTYLAING = 0x12,
    CraftResults_DEPRECATEDASKTYLAING        = 0x13,
    Test                                     = 0x14,
};
