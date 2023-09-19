#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct SessionState {
public:
    // prevent constructor by default
    SessionState& operator=(SessionState const&);
    SessionState(SessionState const&);
    SessionState();
};

}; // namespace NetherNet
