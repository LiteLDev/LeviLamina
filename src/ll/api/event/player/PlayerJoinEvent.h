#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/player/PlayerEvent.h"

namespace ll::event::inline player {

class PlayerJoinEvent final : public Cancellable<PlayerEvent> {
public:
    constexpr explicit PlayerJoinEvent(Player& player) : Cancellable(player) {}
};
} // namespace ll::event::inline player
