#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Identity::Strategies {

struct RetryState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkec97f9;
    ::ll::UntypedStorage<8, 8> mUnke93d48;
    // NOLINTEND

public:
    // prevent constructor by default
    RetryState& operator=(RetryState const&);
    RetryState(RetryState const&);
    RetryState();
};

} // namespace Identity::Strategies
