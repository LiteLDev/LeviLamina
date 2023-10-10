#pragma once

#include "ll/api/event/Event.h"
#include "ll/api/utils/AccessorMacro.h"
#include "mc/Actor.hpp"
#include "mc/BlockInstance.hpp"

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
