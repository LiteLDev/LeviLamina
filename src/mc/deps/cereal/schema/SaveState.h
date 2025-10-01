#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct SaveState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk146526;
    ::ll::UntypedStorage<8, 8> mUnkc72c33;
    // NOLINTEND

public:
    // prevent constructor by default
    SaveState& operator=(SaveState const&);
    SaveState(SaveState const&);
    SaveState();
};

} // namespace cereal::internal
