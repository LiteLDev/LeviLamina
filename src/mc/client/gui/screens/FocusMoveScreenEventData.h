#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FocusMoveScreenEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk88ae84;
    // NOLINTEND

public:
    // prevent constructor by default
    FocusMoveScreenEventData& operator=(FocusMoveScreenEventData const&);
    FocusMoveScreenEventData(FocusMoveScreenEventData const&);
    FocusMoveScreenEventData();
};
