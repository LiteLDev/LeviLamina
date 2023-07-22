#pragma once

#include "liteloader/api/event/Event.h"
#include "mc/ItemStack.hpp"
#include "mc/Vec3.hpp"
#include "liteloader/api/utils/AccessorMacro.h"

namespace ll::event::block {
/**
 * @brief Hopper search item event.
 */
class HopperSearchItemEvent : public Event<HopperSearchItemEvent>, public Cancellable {
    LL_RO_MEMBER(bool, minecart, isMinecart);
    LL_RO_MEMBER(Vec3, pos, getPos);
    LL_RO_MEMBER(int, dimensionId, getDimensionId);
    LL_RO_MEMBER(ItemStack*, itemStack, getItemStack);

    HopperSearchItemEvent(bool isMinecart, Vec3 const& pos, int dimensionId, ItemStack* itemStack);

    LL_DELETE_COPY(HopperSearchItemEvent);
    LL_DELETE_MOVE(HopperSearchItemEvent);
};
} // namespace ll::event::block
