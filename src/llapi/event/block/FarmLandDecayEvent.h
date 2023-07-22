#pragma once

#include "llapi/event/Event.h"
#include "llapi/mc/Actor.hpp"
#include "llapi/mc/BlockInstance.hpp"
#include "llapi/utils/AccessorMacro.h"

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
