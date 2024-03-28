#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/player/PlayerEvent.h"

namespace ll::event::inline player {

class PlayerRespawnEvent final : public PlayerEvent {
public:
    constexpr explicit PlayerRespawnEvent(Player& player) : PlayerEvent(player) {}
};
} // namespace ll::event::inline player
