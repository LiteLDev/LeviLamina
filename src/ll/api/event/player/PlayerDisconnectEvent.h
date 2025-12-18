#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/player/ServerPlayerEvent.h"

namespace ll::event::inline player {

class PlayerDisconnectEvent final : public ServerPlayerEvent {
public:
    constexpr explicit PlayerDisconnectEvent(ServerPlayer& player) : ServerPlayerEvent(player) {}
};
} // namespace ll::event::inline player
