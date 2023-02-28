#pragma once

#include "llapi/event/Event.h"
#include "llapi/mc/Player.hpp"
#include "llapi/utils/AccessorMacro.h"


namespace ll::event::player {

/**
 * @brief Player join event.
 * @details This event is called when a player joins the server(the player entity spawns).
 */
class PlayerLeaveEvent : public Event<PlayerLeaveEvent> {
    LL_RO_MEMBER(Player*, player, getPlayer);

    explicit PlayerLeaveEvent(Player* player);

    LL_DELETE_COPY(PlayerLeaveEvent);
    LL_DELETE_MOVE(PlayerLeaveEvent);
};

} // namespace ll::event::player
