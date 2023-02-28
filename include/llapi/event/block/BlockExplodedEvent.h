#pragma once

#include "llapi/event/Event.h"
#include "llapi/mc/Actor.hpp"
#include "llapi/mc/BlockInstance.hpp"
#include "llapi/utils/AccessorMacro.h"

namespace ll::event::block {
/**
 * @brief Block exploded event.
 */
class BlockExplodedEvent : public Event<BlockExplodedEvent>, public Cancellable {
    LL_RO_MEMBER(BlockInstance, blockInstance, getBlockInstance);
    LL_RO_MEMBER(Actor*, explodeSource, getExplodeSource);

    BlockExplodedEvent(BlockInstance const& blockInstance, Actor* explodeSource);

    LL_DELETE_COPY(BlockExplodedEvent);
    LL_DELETE_MOVE(BlockExplodedEvent);
};
} // namespace ll::event::block
