#pragma once

#include "llapi/event/Event.h"
#include "llapi/mc/BlockPos.hpp"
#include "llapi/utils/AccessorMacro.h"

namespace ll::event::block {
/**
 * @brief Fire spread event.
 */
class FireSpreadEvent : public Event<FireSpreadEvent>, public Cancellable {
    LL_RO_MEMBER(BlockPos, target, getTarget);
    LL_RO_MEMBER(int, dimensionId, getDimensionId);

    explicit FireSpreadEvent(BlockPos const& target, int dimensionId = -1);

    LL_DELETE_COPY(FireSpreadEvent);
    LL_DELETE_MOVE(FireSpreadEvent);
};
} // namespace ll::event::block
