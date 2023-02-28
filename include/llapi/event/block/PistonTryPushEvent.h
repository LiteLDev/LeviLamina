#pragma once

#include "llapi/event/Event.h"
#include "llapi/mc/BlockInstance.hpp"
#include "llapi/utils/AccessorMacro.h"

namespace ll::event::block {
/**
 * @brief Piston try push event.
 */
class PistonTryPushEvent : public Event<PistonTryPushEvent>, public Cancellable {
    LL_RO_MEMBER(BlockInstance, pistonBlockInstance, getPistonBlockInstance);
    LL_RO_MEMBER(BlockInstance, targetBlockInstance, getTargetBlockInstance);

    PistonTryPushEvent(BlockInstance const& pistonBlockInstance, BlockInstance const& targetBlockInstance);

    LL_DELETE_COPY(PistonTryPushEvent);
    LL_DELETE_MOVE(PistonTryPushEvent);
};
} // namespace ll::event::block
