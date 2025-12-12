#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct OverrideState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkbdef12;
    ::ll::UntypedStorage<4, 4> mUnk32924f;
    // NOLINTEND

public:
    // prevent constructor by default
    OverrideState& operator=(OverrideState const&);
    OverrideState(OverrideState const&);
    OverrideState();
};

} // namespace cereal::internal
