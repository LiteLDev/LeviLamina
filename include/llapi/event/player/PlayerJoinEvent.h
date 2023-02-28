#pragma once

#include "llapi/event/Event.h"
#include "llapi/mc/Player.hpp"
#include "llapi/utils/AccessorMacro.h"


namespace ll::event::player {

/**
 * @brief Player join event.
 * @details This event is called when a player joins the server(the player entity spawns).
 */
class PlayerJoinEvent : public Event<PlayerJoinEvent>, public Cancellable {
    LL_RO_MEMBER(Player*, player, getPlayer);

    explicit PlayerJoinEvent(Player* player);

    LL_DELETE_COPY(PlayerJoinEvent);
    LL_DELETE_MOVE(PlayerJoinEvent);
};

} // namespace ll::event::player
