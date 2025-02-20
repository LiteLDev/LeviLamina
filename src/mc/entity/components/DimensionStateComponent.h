#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DimensionStateComponent {
public:
    // DimensionStateComponent inner types define
    enum class DimensionState : int {
        Ready                 = 0,
        Pending               = 1,
        WaitingServerResponse = 2,
        WaitingArea           = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc474f6;
    ::ll::UntypedStorage<8, 8> mUnk6df981;
    // NOLINTEND

public:
    // prevent constructor by default
    DimensionStateComponent& operator=(DimensionStateComponent const&);
    DimensionStateComponent(DimensionStateComponent const&);
    DimensionStateComponent();
};
