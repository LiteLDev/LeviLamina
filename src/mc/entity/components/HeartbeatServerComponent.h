#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HeartbeatServerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 216> mUnkcfe0d9;
    ::ll::UntypedStorage<8, 496> mUnk92c81f;
    // NOLINTEND

public:
    // prevent constructor by default
    HeartbeatServerComponent& operator=(HeartbeatServerComponent const&);
    HeartbeatServerComponent(HeartbeatServerComponent const&);
    HeartbeatServerComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~HeartbeatServerComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
