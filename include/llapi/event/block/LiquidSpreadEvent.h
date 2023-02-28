#pragma once

#include "llapi/event/Event.h"
#include "llapi/mc/Actor.hpp"
#include "llapi/mc/BlockInstance.hpp"
#include "llapi/mc/BlockPos.hpp"
#include "llapi/utils/AccessorMacro.h"

namespace ll::event::block {
/**
 * @brief Liquid spread event.
 */
class LiquidSpreadEvent : public Event<LiquidSpreadEvent>, public Cancellable {
    LL_RO_MEMBER(BlockInstance, blockInstance, getBlockInstance);
    LL_RO_MEMBER(BlockPos, target, getTarget);
    LL_RO_MEMBER(int, dimensionId, getDimensionId);

    LiquidSpreadEvent(BlockInstance const& blockInstance, BlockPos const& target, int dimensionId = -1);

    LL_DELETE_COPY(LiquidSpreadEvent);
    LL_DELETE_MOVE(LiquidSpreadEvent);
};
} // namespace ll::event::block
