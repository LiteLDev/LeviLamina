#pragma once

#include "liteloader/api/event/Event.h"
#include "mc/BlockInstance.hpp"
#include "mc/Player.hpp"
#include "liteloader/api/utils/AccessorMacro.h"

namespace ll::event::block {

/**
 * @brief This event is called when a player tries to place a block. Cancel this event to prevent the
 * block from being placed.
 *
 * @details Please note that the block may not be placed successfully even if this event is not cancelled.
 * To ensure that the block is placed successfully, you can use BlockPlaceEvent, which is not cancellable.
 * @see ll::event::block::BlockPlaceEvent
 */
class BlockTryPlaceEvent : public Event<BlockTryPlaceEvent>, public Cancellable {
    LL_RO_MEMBER(BlockInstance, blockInstance, getBlockInstance);
    LL_RO_MEMBER(Player*, player, getPlayer);

    BlockTryPlaceEvent(BlockInstance const& blockInstance, Player* player);

    LL_DELETE_COPY(BlockTryPlaceEvent);
    LL_DELETE_MOVE(BlockTryPlaceEvent);
};

} // namespace ll::event::block
