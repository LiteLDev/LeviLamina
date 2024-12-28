#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::spawn {

struct State {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk405f18;
    ::ll::UntypedStorage<4, 32> mUnk771caf;
    ::ll::UntypedStorage<8, 56> mUnk6b0688;
    // NOLINTEND

public:
    // prevent constructor by default
    State& operator=(State const&);
    State(State const&);
    State();
};

} // namespace br::spawn
