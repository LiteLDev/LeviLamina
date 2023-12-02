#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/event/Cancellable.h"
#include "ll/api/event/Event.h"

#include "mc/server/ServerPlayer.h"

namespace ll::event::inline player {
class PlayerJoinEvent : public Cancellable<Event> {
public:
    ServerPlayer& player;

    constexpr explicit PlayerJoinEvent(ServerPlayer& player) : player(player) {}

};
} // namespace ll::event::inline player
