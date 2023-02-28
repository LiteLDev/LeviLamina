#pragma once

#include "llapi/event/Event.h"
#include "llapi/mc/BlockInstance.hpp"
#include "llapi/mc/Vec3.hpp"
#include "llapi/utils/AccessorMacro.h"

namespace ll::event::block {
/**
 * @brief Hopper search item event.
 */
class HopperSearchItemEvent : public Event<HopperSearchItemEvent>, public Cancellable {
    LL_RO_MEMBER(bool, isMinecart, getIsMinecart);
    LL_RO_MEMBER(BlockInstance, hopperBlock, getHopperBlock);
    LL_RO_MEMBER(Vec3, minecartPos, getMinecartPos);
    LL_RO_MEMBER(int, dimensionId, getDimensionId);

    HopperSearchItemEvent(
        bool                 isMinecart,
        BlockInstance const& hopperBlock,
        Vec3 const&          minecartPos,
        int                  dimensionId = -1
    );

    LL_DELETE_COPY(HopperSearchItemEvent);
    LL_DELETE_MOVE(HopperSearchItemEvent);
};
} // namespace ll::event::block
