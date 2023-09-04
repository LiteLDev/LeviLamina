#pragma once

#include "liteloader/api/event/Event.h"
#include "liteloader/api/utils/AccessorMacro.h"
#include "mc/BlockInstance.hpp"
#include "mc/Player.hpp"

namespace ll::event::player {

/**
 * @brief Player start destroy block event
 * @details This event will be called when player start destroy block
 */
class PlayerStartDestroyBlockEvent : public Event<PlayerStartDestroyBlockEvent> {
    LL_RO_MEMBER(Player*, player, getPlayer);
    LL_RO_MEMBER(BlockInstance, blockInstance, getBlockInstance);

    explicit PlayerStartDestroyBlockEvent(Player* player, BlockInstance const& block);

    LL_DELETE_COPY(PlayerStartDestroyBlockEvent);
    LL_DELETE_MOVE(PlayerStartDestroyBlockEvent);
};

} // namespace ll::event::player
