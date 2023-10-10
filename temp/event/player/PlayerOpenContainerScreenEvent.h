#pragma once

#include "ll/api/event/Event.h"
#include "ll/api/utils/AccessorMacro.h"
#include "mc/Player.hpp"

namespace ll::event::player {

/**
 * @brief Player open container screen event.
 * @details This event is called when a player opens a container screen.
 */
class PlayerOpenContainerScreenEvent : public Event<PlayerOpenContainerScreenEvent>, public Cancellable {
    LL_RO_MEMBER(Player*, player, getPlayer);

    explicit PlayerOpenContainerScreenEvent(Player* player);

    LL_DELETE_COPY(PlayerOpenContainerScreenEvent);
    LL_DELETE_MOVE(PlayerOpenContainerScreenEvent);
};

} // namespace ll::event::player
