#pragma once

#include "ll/api/event/Event.h"
#include "ll/api/utils/AccessorMacro.h"
#include "mc/Player.hpp"


namespace ll::event::player {

/**
 * @brief Player respawn event.
 * @details This event is called when a player respawn.
 */
class PlayerRespawnEvent : public Event<PlayerRespawnEvent> {
    LL_RO_MEMBER(Player*, player, getPlayer);

    explicit PlayerRespawnEvent(Player* player);

    LL_DELETE_COPY(PlayerRespawnEvent);
    LL_DELETE_MOVE(PlayerRespawnEvent);
};

} // namespace ll::event::player
