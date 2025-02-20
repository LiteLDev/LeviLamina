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
    // static functions
    // NOLINTBEGIN
    MCAPI static void _foreachTransactionPacket(
        ::PlayerActionComponent const&                              actions,
        bool                                                        callback,
        ::std::function<void(::InventoryTransactionPacket&)> const& isClientSide
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
