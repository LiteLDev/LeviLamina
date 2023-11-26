#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/event/Cancellable.h"
#include "ll/api/event/Event.h"

#include "mc/world/actor/player/Player.h"

namespace ll::event::player {
class PlayerChangePermEvent : public Cancellable<Event> {
public:
    Player&                 player;
    CommandPermissionLevel& newPerm;

    constexpr explicit PlayerChangePermEvent(Player& player, CommandPermissionLevel& newPerm)
    : player(player),
      newPerm(newPerm) {}

    LLNDAPI static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
};
} // namespace ll::event::player
