#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/player/PlayerEvent.h"

namespace ll::event::inline player {

class PlayerSwingEvent : public PlayerEvent {
public:
    constexpr explicit PlayerSwingEvent(Player& player) : PlayerEvent(player) {}
};
} // namespace ll::event::inline player
