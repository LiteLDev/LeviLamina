#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/player/PlayerEvent.h"

namespace ll::event::inline player {

class PlayerSprintEvent : public PlayerEvent {
protected:
    constexpr explicit PlayerSprintEvent(Player& player) : PlayerEvent(player) {}
};

class PlayerSprintingEvent final : public PlayerSprintEvent {
public:
    constexpr explicit PlayerSprintingEvent(Player& player) : PlayerSprintEvent(player) {}
};

class PlayerSprintedEvent final : public PlayerSprintEvent {
public:
    constexpr explicit PlayerSprintedEvent(Player& player) : PlayerSprintEvent(player) {}
};
} // namespace ll::event::inline player
