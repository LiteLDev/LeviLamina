#pragma once

#include "llapi/event/Event.h"
#include "llapi/mc/BlockInstance.hpp"
#include "llapi/mc/Container.hpp"
#include "llapi/mc/Player.hpp"
#include "llapi/utils/AccessorMacro.h"

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
