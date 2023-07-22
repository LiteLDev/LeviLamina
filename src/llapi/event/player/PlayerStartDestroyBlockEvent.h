#pragma once

#include "llapi/event/Event.h"
#include "llapi/mc/BlockInstance.hpp"
#include "llapi/mc/Player.hpp"
#include "llapi/utils/AccessorMacro.h"

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
