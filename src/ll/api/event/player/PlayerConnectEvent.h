#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/event/Cancellable.h"
#include "ll/api/event/Event.h"

#include "mc/server/ServerPlayer.h"

class ConnectionRequest;
class NetworkIdentifier;

namespace ll::event::inline player {
class PlayerConnectEvent : public Cancellable<Event> {
public:
    NetworkIdentifier const& networkIdentifier;
    ConnectionRequest const& connectionRequest;
    ServerPlayer&            player;

    constexpr explicit PlayerConnectEvent(
        NetworkIdentifier const& networkIdentifier,
        ConnectionRequest const& connectionRequest,
        ServerPlayer&            player
    )
    : networkIdentifier(networkIdentifier),
      connectionRequest(connectionRequest),
      player(player) {}

    LLNDAPI static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
};
} // namespace ll::event::inline player
