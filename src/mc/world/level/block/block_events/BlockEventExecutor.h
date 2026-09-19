#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/block/block_events/BlockEventPublishingExecutor.h"

namespace BlockEvents {

template <typename T0>
class BlockEventExecutor : public BlockEvents::Detail::BlockEventPublishingExecutor<T0> {
public:
    virtual ~BlockEventExecutor() = default;

    virtual ::BlockEvents::EventType getEventType() const;

    virtual void dispatch(T0& event);
};

} // namespace BlockEvents
