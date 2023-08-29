#pragma once

#include "liteloader/api/event/Event.h"
#include "mc/BlockInstance.hpp"
#include "mc/Container.hpp"
#include "mc/Player.hpp"
#include "liteloader/api/utils/AccessorMacro.h"

namespace ll::event::player {

/**
 * @brief Player close container event.
 * @details This event is called when a player closes a container, such as a chest or barrel.
 */
class PlayerCloseContainerEvent : public Event<PlayerCloseContainerEvent> {
    LL_RO_MEMBER(Player*, player, getPlayer);
    LL_RO_MEMBER(BlockInstance, blockInstance, getBlockInstance);
    LL_RO_MEMBER(Container*, container, getContainer);

    explicit PlayerCloseContainerEvent(Player* player, BlockInstance blockInstance, Container* container);

    LL_DELETE_COPY(PlayerCloseContainerEvent);
    LL_DELETE_MOVE(PlayerCloseContainerEvent);
};

} // namespace ll::event::player
