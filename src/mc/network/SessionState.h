#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct SessionState {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETHERNET_SESSIONSTATE
public:
    SessionState& operator=(SessionState const&) = delete;
    SessionState(SessionState const&)            = delete;
    SessionState()                               = delete;
#endif

public:
};

}; // namespace NetherNet
