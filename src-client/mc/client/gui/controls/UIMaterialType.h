#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class UIMaterialType : int {
    None                             = 0,
    TexturedAndGlcolorSprite         = 1,
    TexturedAndGlcolorBilinearSprite = 2,
    Grayscale                        = 3,
    GrayscaleBilinear                = 4,
    InventoryItemGlint               = 5,
    ItemGlintStencil                 = 6,
    ItemUnglintStencil               = 7,
    Banner                           = 8,
    Shield                           = 9,
    DragonHead                       = 10,
    MobHead                          = 11,
    Conduit                          = 12,
    Item                             = 13,
    ItemMulticolorTint               = 14,
    Count                            = 15,
};
