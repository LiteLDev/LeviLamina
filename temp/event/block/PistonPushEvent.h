#pragma once

#include "liteloader/api/event/Event.h"
#include "mc/BlockInstance.hpp"
#include "liteloader/api/utils/AccessorMacro.h"

namespace ll::event::block {
/**
 * @brief Piston push event.
 */
class PistonPushEvent : public Event<PistonPushEvent> {
    LL_RO_MEMBER(BlockInstance, pistonBlockInstance, getPistonBlockInstance);
    LL_RO_MEMBER(BlockInstance, targetBlockInstance, getTargetBlockInstance);

    PistonPushEvent(BlockInstance const& pistonBlockInstance, BlockInstance const& targetBlockInstance);

    LL_DELETE_COPY(PistonPushEvent);
    LL_DELETE_MOVE(PistonPushEvent);
};
} // namespace ll::event::block
