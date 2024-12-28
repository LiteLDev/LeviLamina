#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class InventoryTransactionPacket;
struct PlayerActionComponent;
struct TickingSystemWithInfo;
// clang-format on

class ProcessPlayerActionPacketSystem {
public:
    // prevent constructor by default
    ProcessPlayerActionPacketSystem& operator=(ProcessPlayerActionPacketSystem const&);
    ProcessPlayerActionPacketSystem(ProcessPlayerActionPacketSystem const&);
    ProcessPlayerActionPacketSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _foreachTransactionPacket(
        ::PlayerActionComponent const&                              actions,
        bool                                                        isClientSide,
        ::std::function<void(::InventoryTransactionPacket&)> const& callback
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
