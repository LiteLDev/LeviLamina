#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StoreInventoryScreenController {
public:
    // StoreInventoryScreenController inner types declare
    // clang-format off
    struct CategoryInfo;
    struct TabInfo;
    // clang-format on

    // StoreInventoryScreenController inner types define
    enum class PackCategory : int {
        Skins    = 0,
        Worlds   = 1,
        Textures = 2,
        Mashups  = 3,
        Addons   = 4,
        Audio    = 5,
        Total    = 6,
        All      = 7,
        None     = 8,
    };

    struct CategoryInfo {};

    struct TabInfo {};
};
