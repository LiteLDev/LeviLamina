#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/event/Cancellable.h"
#include "ll/api/event/Event.h"
#include "mc/world/actor/player/Player.h"


namespace ll::event::inline player {
/**
 * @brief Player respawn event.
 */
class PlayerRespawnEvent : public Event {
public:
    Player& player;

    constexpr explicit PlayerRespawnEvent(Player& player) : player(player) {}
};

} // namespace ll::event::inline player
