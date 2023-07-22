#pragma once

#include "liteloader/api/event/Event.h"
#include "mc/Actor.hpp"
#include "mc/BlockInstance.hpp"
#include "liteloader/api/utils/AccessorMacro.h"

namespace ll::event::block {
/**
 * @brief Farm land decay event.
 */
class FarmLandDecayEvent : public Event<FarmLandDecayEvent>, public Cancellable {
    LL_RO_MEMBER(BlockInstance, blockInstance, getBlockInstance);
    LL_RO_MEMBER(Actor*, actor, getActor);

    FarmLandDecayEvent(BlockInstance const& blockInstance, Actor* actor);

    LL_DELETE_COPY(FarmLandDecayEvent);
    LL_DELETE_MOVE(FarmLandDecayEvent);
};
} // namespace ll::event::block
