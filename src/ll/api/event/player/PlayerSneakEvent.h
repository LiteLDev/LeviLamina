#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/player/PlayerEvent.h"

namespace ll::event::inline player {

class PlayerSneakEvent : public Cancellable<PlayerEvent> {
protected:
    constexpr explicit PlayerSneakEvent(Player& player) : Cancellable(player) {}
};

class PlayerSneakingEvent final : public PlayerSneakEvent {
public:
    constexpr explicit PlayerSneakingEvent(Player& player) : PlayerSneakEvent(player) {}
};

class PlayerSneakedEvent final : public PlayerSneakEvent {
public:
    constexpr explicit PlayerSneakedEvent(Player& player) : PlayerSneakEvent(player) {}
};
} // namespace ll::event::inline player
