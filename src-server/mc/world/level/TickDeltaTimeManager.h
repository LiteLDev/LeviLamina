#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TickDeltaTimeManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk27bb36;
    ::ll::UntypedStorage<8, 8> mUnk6cf847;
    // NOLINTEND

public:
    // prevent constructor by default
    TickDeltaTimeManager& operator=(TickDeltaTimeManager const&);
    TickDeltaTimeManager(TickDeltaTimeManager const&);
    TickDeltaTimeManager();

};
