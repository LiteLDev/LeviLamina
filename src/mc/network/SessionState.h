#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct SessionState {

public:
    // prevent constructor by default
    SessionState& operator=(SessionState const&) = delete;
    SessionState(SessionState const&)            = delete;
    SessionState()                               = delete;
};

}; // namespace NetherNet
