#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/player/PlayerEvent.h"

namespace ll::event::inline player {

class PlayerLeaveEvent final : public PlayerEvent {
public:
    constexpr explicit PlayerLeaveEvent(Player& player) : PlayerEvent(player) {}
};
} // namespace ll::event::inline player
