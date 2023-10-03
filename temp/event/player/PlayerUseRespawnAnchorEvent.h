#pragma once

#include "liteloader/api/event/Event.h"
#include "liteloader/api/utils/AccessorMacro.h"
#include "mc/BlockInstance.hpp"
#include "mc/Player.hpp"

namespace ll::event::player {

/**
 * @brief Player use respawn anchor event.
 * @details This event is called when a player uses a respawn anchor.
 */
class PlayerUseRespawnAnchorEvent : public Event<PlayerUseRespawnAnchorEvent>, public Cancellable {
    LL_RO_MEMBER(Player*, player, getPlayer);
    LL_RO_MEMBER(BlockInstance, blockInstance, getBlockInstance);

    explicit PlayerUseRespawnAnchorEvent(Player* player, BlockInstance const& blockInstance);

    LL_DELETE_COPY(PlayerUseRespawnAnchorEvent);
    LL_DELETE_MOVE(PlayerUseRespawnAnchorEvent);
};

} // namespace ll::event::player
