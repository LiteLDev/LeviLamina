#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/player/ServerPlayerEvent.h"

namespace ll::event::inline player {

class PlayerSprintEvent : public ServerPlayerEvent {
protected:
    constexpr explicit PlayerSprintEvent(ServerPlayer& player) : ServerPlayerEvent(player) {}
};

class PlayerSprintingEvent final : public PlayerSprintEvent {
public:
    constexpr explicit PlayerSprintingEvent(ServerPlayer& player) : PlayerSprintEvent(player) {}
};

class PlayerSprintedEvent final : public PlayerSprintEvent {
public:
    constexpr explicit PlayerSprintedEvent(ServerPlayer& player) : PlayerSprintEvent(player) {}
};
} // namespace ll::event::inline player
