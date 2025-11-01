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
    MCNAPI static void _foreachTransactionPacket(
        ::PlayerActionComponent const&                              actions,
        bool                                                        isClientSide,
        ::std::function<void(::InventoryTransactionPacket&)> const& callback
    );

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
