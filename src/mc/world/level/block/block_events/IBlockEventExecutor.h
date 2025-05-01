#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/EventType.h"

namespace BlockEvents {

class IBlockEventExecutor {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IBlockEventExecutor() = default;

    // vIndex: 1
    virtual ::BlockEvents::EventType getEventType() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace BlockEvents
