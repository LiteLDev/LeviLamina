#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/BlockPatternEvent.h"

struct BlockPatternPostEvent : public ::BlockPatternEvent {
public:
    // prevent constructor by default
    BlockPatternPostEvent& operator=(BlockPatternPostEvent const&);
    BlockPatternPostEvent(BlockPatternPostEvent const&);
    BlockPatternPostEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BlockPatternPostEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
