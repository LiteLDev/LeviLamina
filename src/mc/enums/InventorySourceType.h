#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class InventorySourceType : int {
    InvalidInventory          = -1,
    ContainerInventory        = 0,
    GlobalInventory           = 1,
    WorldInteraction          = 2,
    CreativeInventory         = 3,
    NonImplementedFeatureTODO = 99999,
};
