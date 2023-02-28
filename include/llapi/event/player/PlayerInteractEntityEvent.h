#pragma once

#include "llapi/event/Event.h"
#include "llapi/mc/Actor.hpp"
#include "llapi/mc/Player.hpp"
#include "llapi/utils/AccessorMacro.h"

namespace ll::event::player {

/**
 * @brief Player interact with entity event.
 * @details This event is called when a player interacts with an entity.
 */
class PlayerInteractEntityEvent : public Event<PlayerInteractEntityEvent>, public Cancellable {
public:
    enum class InteractiveMode { None = -1, RightClick, LeftClick };

    LL_RO_MEMBER(ServerPlayer*, serverPlayer, getServerPlayer);
    LL_RO_MEMBER(ActorRuntimeID, targetId, getTargetId);
    LL_RO_MEMBER(InteractiveMode, interactiveMode, getInteractiveMode);

    explicit PlayerInteractEntityEvent(ServerPlayer* player, ActorRuntimeID targetId, InteractiveMode interactiveMode);

    LL_DELETE_COPY(PlayerInteractEntityEvent);
    LL_DELETE_MOVE(PlayerInteractEntityEvent);
};

} // namespace ll::event::player
