#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace History {

struct TurnInput {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnked50d3;
    // NOLINTEND

public:
    // prevent constructor by default
    TurnInput& operator=(TurnInput const&);
    TurnInput(TurnInput const&);
    TurnInput();
};

} // namespace History
