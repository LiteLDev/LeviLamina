#pragma once

#include "liteloader/api/event/Event.h"
#include "mc/Player.hpp"
#include "liteloader/api/utils/AccessorMacro.h"

namespace ll::event::player {

/**
 * @brief Player change dimension event.
 * @details This event is called when a player changes dimension.
 */
class PlayerChangeDimEvent : public Event<PlayerChangeDimEvent>, public Cancellable {
    LL_RO_MEMBER(Player*, player, getPlayer);
    LL_RO_MEMBER(int32_t, toDimensionId, getToDimensionId);

    explicit PlayerChangeDimEvent(Player* player, int32_t toDimensionId);

    LL_DELETE_COPY(PlayerChangeDimEvent);
    LL_DELETE_MOVE(PlayerChangeDimEvent);
};

} // namespace ll::event::player
