#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/BlockPatternEvent.h"

struct BlockPatternPreEvent : public ::BlockPatternEvent {
public:
    // prevent constructor by default
    BlockPatternPreEvent& operator=(BlockPatternPreEvent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockPatternPreEvent(::BlockPatternPreEvent const&);

    MCNAPI ~BlockPatternPreEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPatternPreEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
