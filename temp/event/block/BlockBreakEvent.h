#pragma once

#include "ll/api/event/Event.h"
#include "ll/api/utils/AccessorMacro.h"
#include "mc/BlockInstance.hpp"
#include "mc/Player.hpp"

namespace ll::event::block {

/**
 * @brief Block break event.
 * @details This event is called when a player breaks a block.
 */
class BlockBreakEvent : public Event<BlockBreakEvent>, public Cancellable {
    LL_RO_MEMBER(Player*, player, getPlayer);
    LL_RO_MEMBER(BlockInstance, blockInstance, getBlockInstance);

    explicit BlockBreakEvent(Player* player, BlockInstance const& blockInstance);

    LL_DELETE_COPY(BlockBreakEvent);
    LL_DELETE_MOVE(BlockBreakEvent);
};

} // namespace ll::event::block
