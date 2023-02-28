#pragma once

#include "llapi/event/Event.h"
#include "llapi/mc/Vec3.hpp"
#include "llapi/utils/AccessorMacro.h"

namespace ll::event::block {
/**
 * @brief Hopper push out event.
 */
class HopperPushOutEvent : public Event<HopperPushOutEvent>, public Cancellable {
    LL_RO_MEMBER(Vec3, pos, getPos);
    LL_RO_MEMBER(int, dimensionId, getDimensionId);

    HopperPushOutEvent(Vec3 const& pos, int dimensionId = -1);

    LL_DELETE_COPY(HopperPushOutEvent);
    LL_DELETE_MOVE(HopperPushOutEvent);
};
} // namespace ll::event::block
