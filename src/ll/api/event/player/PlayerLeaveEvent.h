#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/event/Cancellable.h"
#include "ll/api/event/Event.h"

#include "mc/server/ServerPlayer.h"

namespace ll::event::player {
class PlayerLeaveEvent : public Event {
public:
    ServerPlayer& player;

    constexpr explicit PlayerLeaveEvent(ServerPlayer& player) : player(player) {}

    LLNDAPI static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
};
} // namespace ll::event::player
