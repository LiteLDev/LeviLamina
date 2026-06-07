#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorRuntimeID;
class InventoryTransactionPacket;
class NetEventCallback;
class NetworkIdentifier;
class PlayerAuthInputPacket;
struct PlayerActionComponent;
struct TickingSystemWithInfo;
// clang-format on

class ProcessPlayerActionPacketSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _foreachTransactionPacket(
        ::PlayerActionComponent const&                              actions,
        bool                                                        isClientSide,
        ::std::function<void(::InventoryTransactionPacket&)> const& callback
    );

    MCAPI static void _forwardPlayerActionPackets(
        ::NetworkIdentifier const&     clientId,
        ::ActorRuntimeID const&        playerId,
        ::PlayerAuthInputPacket const& inputPacket,
        ::PlayerActionComponent const& input,
        ::NetEventCallback&            handler
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
