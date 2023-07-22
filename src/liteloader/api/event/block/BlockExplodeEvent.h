#pragma once

#include "liteloader/api/event/Event.h"
#include "mc/BlockInstance.hpp"
#include "liteloader/api/utils/AccessorMacro.h"

namespace ll::event::block {
/**
 * @brief Block explode event.
 */
class BlockExplodeEvent : public Event<BlockExplodeEvent>, public Cancellable {
    LL_RO_MEMBER(BlockInstance, blockInstance, getBlockInstance);
    LL_RW_MEMBER(float, radius, getRadius, setRadius);
    LL_RW_MEMBER(float, maxResistance, getMaxResistance, setMaxResistance);
    LL_RW_MEMBER(bool, isCanBreaking, getIsCanBreaking, setIsCanBreaking);
    LL_RW_MEMBER(bool, isGenerateFire, getIsGnerateFire, setIsGnerateFire);

    explicit BlockExplodeEvent(
        BlockInstance const& blockInstance,
        float                radius         = 0.0f,
        float                maxResistance  = 0.0f,
        bool                 isCanBreaking  = false,
        bool                 isGenerateFire = false
    );

    LL_DELETE_COPY(BlockExplodeEvent);
    LL_DELETE_MOVE(BlockExplodeEvent);
};
} // namespace ll::event::block
