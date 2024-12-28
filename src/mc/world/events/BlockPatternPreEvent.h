#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/BlockPatternEvent.h"

struct BlockPatternPreEvent : public ::BlockPatternEvent {
public:
    // prevent constructor by default
    BlockPatternPreEvent& operator=(BlockPatternPreEvent const&);
    BlockPatternPreEvent(BlockPatternPreEvent const&);
    BlockPatternPreEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BlockPatternPreEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
