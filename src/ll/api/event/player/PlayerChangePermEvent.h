#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/event/Cancellable.h"
#include "ll/api/event/Event.h"

#include "mc/world/actor/player/Player.h"

namespace ll::event::inline player {
class PlayerChangePermEvent : public Cancellable<Event> {
public:
    Player&                 player;
    CommandPermissionLevel& newPerm;

    constexpr explicit PlayerChangePermEvent(Player& player, CommandPermissionLevel& newPerm)
    : player(player),
      newPerm(newPerm) {}
};
} // namespace ll::event::inline player
