#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelStartLeaveGameEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkaed8af;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelStartLeaveGameEvent& operator=(LevelStartLeaveGameEvent const&);
    LevelStartLeaveGameEvent(LevelStartLeaveGameEvent const&);
    LevelStartLeaveGameEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~LevelStartLeaveGameEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
