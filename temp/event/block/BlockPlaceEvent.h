#pragma once

#include "ll/api/event/Event.h"
#include "ll/api/utils/AccessorMacro.h"
#include "mc/BlockInstance.hpp"
#include "mc/Player.hpp"

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
