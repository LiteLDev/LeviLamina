#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct InputModeChangeScreenEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkacc9d8;
    // NOLINTEND

public:
    // prevent constructor by default
    InputModeChangeScreenEventData& operator=(InputModeChangeScreenEventData const&);
    InputModeChangeScreenEventData(InputModeChangeScreenEventData const&);
    InputModeChangeScreenEventData();
};
