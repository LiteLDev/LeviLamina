#pragma once

#include "llapi/event/Event.h"
#include "llapi/mc/BlockInstance.hpp"
#include "llapi/mc/Player.hpp"
#include "llapi/utils/AccessorMacro.h"

namespace ll::event::block {

/**
 * @brief This event is called when a player placed a block. This event is not cancellable.
 *
 * @details To prevent the block from being placed, you can use BlockTryPlaceEvent.
 * @see ll::event::block::BlockTryPlaceEvent
 */
class BlockPlaceEvent : public Event<BlockPlaceEvent> {
    LL_RO_MEMBER(BlockInstance, blockInstance, getBlockInstance);
    LL_RO_MEMBER(Player*, player, getPlayer);

    BlockPlaceEvent(BlockInstance const& blockInstance, Player* player);

    LL_DELETE_COPY(BlockPlaceEvent);
    LL_DELETE_MOVE(BlockPlaceEvent);
};

} // namespace ll::event::block
