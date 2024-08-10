#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/player/ServerPlayerEvent.h"

namespace ll::event::inline player {

class PlayerJoinEvent final : public Cancellable<ServerPlayerEvent> {
public:
    constexpr explicit PlayerJoinEvent(ServerPlayer& player) : Cancellable(player) {}
};
} // namespace ll::event::inline player
