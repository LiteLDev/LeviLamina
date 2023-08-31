#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class InventorySourceType : int32_t {
    InvalidInventory          = -1,
    ContainerInventory        = 0,
    GlobalInventory           = 1,
    WorldInteraction          = 2,
    CreativeInventory         = 3,
    NonImplementedFeatureTODO = 99999,
};
