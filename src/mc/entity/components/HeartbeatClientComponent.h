#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HeartbeatClientComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk41483b;
    ::ll::UntypedStorage<4, 4>  mUnk89570c;
    ::ll::UntypedStorage<4, 4>  mUnk502d2d;
    ::ll::UntypedStorage<1, 1>  mUnkbaad03;
    ::ll::UntypedStorage<8, 16> mUnk30b3ab;
    // NOLINTEND

public:
    // prevent constructor by default
    HeartbeatClientComponent& operator=(HeartbeatClientComponent const&);
    HeartbeatClientComponent(HeartbeatClientComponent const&);
    HeartbeatClientComponent();
};
