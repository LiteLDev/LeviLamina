#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct OverrideState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkbdef12;
    ::ll::UntypedStorage<2, 2> mUnk73164d;
    // NOLINTEND

public:
    // prevent constructor by default
    OverrideState& operator=(OverrideState const&);
    OverrideState(OverrideState const&);
    OverrideState();
};

} // namespace cereal::internal
