#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ProcessPlayerActionPacketSystem {
public:
    // prevent constructor by default
    ProcessPlayerActionPacketSystem& operator=(ProcessPlayerActionPacketSystem const&);
    ProcessPlayerActionPacketSystem(ProcessPlayerActionPacketSystem const&);
    ProcessPlayerActionPacketSystem();

public:
    // NOLINTBEGIN
    // symbol:
    // ?_foreachTransactionPacket@ProcessPlayerActionPacketSystem@@SAXAEBUPlayerActionComponent@@_NAEBV?$function@$$A6AXAEAVInventoryTransactionPacket@@@Z@std@@@Z
    MCAPI static void
    _foreachTransactionPacket(struct PlayerActionComponent const&, bool, std::function<void(class InventoryTransactionPacket&)> const&);

    // symbol: ?createSystem@ProcessPlayerActionPacketSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
