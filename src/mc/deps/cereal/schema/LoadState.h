#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct LoadState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk90c609;
    ::ll::UntypedStorage<8, 8> mUnk394bb0;
    ::ll::UntypedStorage<8, 8> mUnkf50cdf;
    ::ll::UntypedStorage<1, 1> mUnkd05e68;
    // NOLINTEND

public:
    // prevent constructor by default
    LoadState& operator=(LoadState const&);
    LoadState(LoadState const&);
    LoadState();
};

} // namespace cereal::internal
