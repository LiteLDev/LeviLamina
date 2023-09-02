#pragma once

#include "liteloader/api/event/Event.h"
#include "liteloader/api/utils/AccessorMacro.h"
#include "mc/BlockInstance.hpp"
#include "mc/Player.hpp"

namespace ll::event::player {

/**
 * @brief Player open container event.
 * @details This event is called when a player opens a container (e.g. chest).
 */
class PlayerOpenContainerEvent : public Event<PlayerOpenContainerEvent>, public Cancellable {
    LL_RO_MEMBER(Player*, player, getPlayer);
    LL_RO_MEMBER(BlockInstance, blockInstance, getBlockInstance);
    LL_RO_MEMBER(Container*, container, getContainer);

    explicit PlayerOpenContainerEvent(Player* player, BlockInstance blockInstance);

    LL_DELETE_COPY(PlayerOpenContainerEvent);
    LL_DELETE_MOVE(PlayerOpenContainerEvent);
};

} // namespace ll::event::player
