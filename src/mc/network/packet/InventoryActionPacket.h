#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InventoryActionPacket {
public:
    // prevent constructor by default
    InventoryActionPacket& operator=(InventoryActionPacket const&);
    InventoryActionPacket(InventoryActionPacket const&);
    InventoryActionPacket();
};
