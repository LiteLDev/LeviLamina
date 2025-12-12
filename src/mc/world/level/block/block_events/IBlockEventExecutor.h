#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/EventType.h"

namespace BlockEvents {

class IBlockEventExecutor {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IBlockEventExecutor() = default;

    virtual ::BlockEvents::EventType getEventType() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace BlockEvents
