#pragma once

#include "liteloader/api/event/Event.h"
#include "mc/Player.hpp"
#include "liteloader/api/utils/AccessorMacro.h"


namespace ll::event::player {

/**
 * @brief Player jump event.
 * @details This event is called when a player jumps.
 */
class PlayerJumpEvent : public Event<PlayerJumpEvent> {
    LL_RO_MEMBER(Player*, player, getPlayer);

    explicit PlayerJumpEvent(Player* player);

    LL_DELETE_COPY(PlayerJumpEvent);
    LL_DELETE_MOVE(PlayerJumpEvent);
};

} // namespace ll::event::player
