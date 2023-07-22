#pragma once

#include "llapi/event/Event.h"
#include "llapi/mc/BlockInstance.hpp"
#include "llapi/mc/Player.hpp"
#include "llapi/utils/AccessorMacro.h"


namespace ll::event::player {

/**
 * @brief Player attack block event.
 * @details This event is called when a player attacks a block.
 */
class PlayerAttackBlockEvent : public Event<PlayerAttackBlockEvent>, public Cancellable {
    LL_RO_MEMBER(Player*, player, getPlayer);
    LL_RO_MEMBER(BlockInstance, blockInstance, getBlockInstance);
    LL_RO_MEMBER(ItemStack*, itemStack, getItemStack);

    explicit PlayerAttackBlockEvent(Player* player, BlockInstance const& blockInstance, ItemStack* itemStack);

    LL_DELETE_COPY(PlayerAttackBlockEvent);
    LL_DELETE_MOVE(PlayerAttackBlockEvent);
};

} // namespace ll::event::player
