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
    MCAPI static void _foreachTransactionPacket(
        struct PlayerActionComponent const&                           actions,
        bool                                                          isClientSide,
        std::function<void(class InventoryTransactionPacket&)> const& callback
    );

    // symbol: ?createSystem@ProcessPlayerActionPacketSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
