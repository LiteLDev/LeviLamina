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
    MCAPI static void _foreachTransactionPacket(
        struct PlayerActionComponent const&                           actions,
        bool                                                          isClientSide,
        std::function<void(class InventoryTransactionPacket&)> const& callback
    );

    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
