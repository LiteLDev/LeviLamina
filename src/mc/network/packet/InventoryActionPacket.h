#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InventoryActionPacket {

public:
    // prevent constructor by default
    InventoryActionPacket& operator=(InventoryActionPacket const&) = delete;
    InventoryActionPacket(InventoryActionPacket const&)            = delete;
    InventoryActionPacket()                                        = delete;
};
