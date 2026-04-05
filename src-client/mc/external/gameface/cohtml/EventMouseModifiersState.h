#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

struct EventMouseModifiersState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkac7c3b;
    ::ll::UntypedStorage<1, 1> mUnk675d54;
    ::ll::UntypedStorage<1, 1> mUnk32ffe4;
    ::ll::UntypedStorage<1, 1> mUnkd41604;
    ::ll::UntypedStorage<1, 1> mUnkd3efbc;
    // NOLINTEND

public:
    // prevent constructor by default
    EventMouseModifiersState& operator=(EventMouseModifiersState const&);
    EventMouseModifiersState(EventMouseModifiersState const&);
    EventMouseModifiersState();
};

} // namespace cohtml
