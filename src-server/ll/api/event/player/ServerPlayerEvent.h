#pragma once

#include "ll/api/event/player/PlayerEvent.h"

#include "mc/server/ServerPlayer.h"

namespace ll::event::inline player {

class ServerPlayerEvent : public PlayerEvent {
protected:
    constexpr explicit ServerPlayerEvent(ServerPlayer& player) : PlayerEvent(player) {}

public:
    LLNDAPI ServerPlayer& self() const;
};
} // namespace ll::event::inline player
