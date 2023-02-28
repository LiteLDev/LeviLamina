#pragma once

#include "llapi/event/Event.h"
#include "llapi/mc/Player.hpp"
#include "llapi/utils/AccessorMacro.h"

namespace ll::event::player {

/**
 * @brief Player sprint event.
 * @details This event is called when a player toggles sprinting.
 */
class PlayerSprintEvent : public Event<PlayerSprintEvent>, public Cancellable {
    LL_RO_MEMBER(Player*, player, getPlayer);
    LL_RO_MEMBER(bool, sprinting, isSprinting);

    explicit PlayerSprintEvent(Player* player, bool isSprinting);

    LL_DELETE_COPY(PlayerSprintEvent);
    LL_DELETE_MOVE(PlayerSprintEvent);
};

} // namespace ll::event::player
