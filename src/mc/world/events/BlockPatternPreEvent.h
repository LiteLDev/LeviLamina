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
    MCAPI BlockPatternPreEvent(::BlockPatternPreEvent const&);

    MCAPI ~BlockPatternPreEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::BlockPatternPreEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
