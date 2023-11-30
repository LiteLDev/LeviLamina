#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/event/Cancellable.h"
#include "ll/api/event/Event.h"

#include "mc/server/ServerPlayer.h"

namespace ll::event::player {
class PlayerConnectEvent : public Cancellable<Event> {
public:
    const ServerPlayer& player;

    constexpr explicit PlayerConnectEvent(const ServerPlayer& player) : player(player) {}

    LLNDAPI static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
};
} // namespace ll::event::player
