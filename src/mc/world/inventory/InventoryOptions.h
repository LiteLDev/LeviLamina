#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct InventoryOptions {
public:
    // prevent constructor by default
    InventoryOptions& operator=(InventoryOptions const&);
    InventoryOptions(InventoryOptions const&);
    InventoryOptions();
};
