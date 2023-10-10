#pragma once

#include "ll/api/event/Event.h"
#include "ll/api/utils/AccessorMacro.h"
#include "mc/Player.hpp"

namespace ll::event::player {

/**
 * @brief Player swing event.
 * @details This event is called when a player swings their arm.
 */
class PlayerSwingEvent : public Event<PlayerSwingEvent> {
    LL_RO_MEMBER(Player*, player, getPlayer);

    explicit PlayerSwingEvent(Player* player);

    LL_DELETE_COPY(PlayerSwingEvent);
    LL_DELETE_MOVE(PlayerSwingEvent);
};

} // namespace ll::event::player
