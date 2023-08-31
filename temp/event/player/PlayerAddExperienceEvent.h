#pragma once

#include "liteloader/api/event/Event.h"
#include "mc/Player.hpp"
#include "liteloader/api/utils/AccessorMacro.h"

namespace ll::event::player {

/**
 * @brief Player add experience event.
 * @details This event is called when a player adds experience.
 */
class PlayerAddExperienceEvent : public Event<PlayerAddExperienceEvent>, public Cancellable {
    LL_RO_MEMBER(Player*, player, getPlayer);
    LL_RW_MEMBER(int32_t, exp, getExp, setExp);

    explicit PlayerAddExperienceEvent(Player* player, int32_t exp);

    LL_DELETE_COPY(PlayerAddExperienceEvent);
    LL_DELETE_MOVE(PlayerAddExperienceEvent);
};

} // namespace ll::event::player
