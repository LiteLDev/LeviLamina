#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/BlockPatternEvent.h"

struct BlockPatternPostEvent : public ::BlockPatternEvent {
public:
    // prevent constructor by default
    BlockPatternPostEvent& operator=(BlockPatternPostEvent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockPatternPostEvent(::BlockPatternPostEvent const&);

    MCAPI ~BlockPatternPostEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::BlockPatternPostEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
