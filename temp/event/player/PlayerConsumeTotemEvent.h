#pragma once

#include "liteloader/api/event/Event.h"
#include "mc/Player.hpp"

namespace ll::event::player {

/**
 * @brief Player consume totem event.
 * @details This event is called when a player consumes a totem.
 */
class PlayerConsumeTotemEvent : public Event<PlayerConsumeTotemEvent>, public Cancellable {
    LL_RO_MEMBER(Player*, player, getPlayer);

    explicit PlayerConsumeTotemEvent(Player* player);

    LL_DELETE_COPY(PlayerConsumeTotemEvent);
    LL_DELETE_MOVE(PlayerConsumeTotemEvent);
};

} // namespace ll::event::player
