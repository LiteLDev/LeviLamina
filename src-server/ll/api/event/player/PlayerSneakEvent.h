#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/player/ServerPlayerEvent.h"

namespace ll::event::inline player {

class PlayerSneakEvent : public Cancellable<ServerPlayerEvent> {
protected:
    constexpr explicit PlayerSneakEvent(ServerPlayer& player) : Cancellable(player) {}
};

class PlayerSneakingEvent final : public PlayerSneakEvent {
public:
    constexpr explicit PlayerSneakingEvent(ServerPlayer& player) : PlayerSneakEvent(player) {}
};

class PlayerSneakedEvent final : public PlayerSneakEvent {
public:
    constexpr explicit PlayerSneakedEvent(ServerPlayer& player) : PlayerSneakEvent(player) {}
};
} // namespace ll::event::inline player
