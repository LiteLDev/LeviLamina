#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/player/PlayerClickEvent.h"

namespace ll::event::inline player {

class PlayerSwingEvent final : public PlayerLeftClickEvent {
public:
    constexpr explicit PlayerSwingEvent(Player& player) : PlayerLeftClickEvent(player) {}
};
} // namespace ll::event::inline player
