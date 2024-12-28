#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StatePublisher {
public:
    // StatePublisher inner types define
    enum class State : int {
        NotReady                       = 0,
        InProgress                     = 1,
        Ready                          = 2,
        FailedAndLongDelayRetryDesired = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk93a176;
    ::ll::UntypedStorage<4, 4> mUnkefe9f1;
    // NOLINTEND

public:
    // prevent constructor by default
    StatePublisher& operator=(StatePublisher const&);
    StatePublisher(StatePublisher const&);
    StatePublisher();
};
