#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HoloInputModeChangeScreenEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk630019;
    // NOLINTEND

public:
    // prevent constructor by default
    HoloInputModeChangeScreenEventData& operator=(HoloInputModeChangeScreenEventData const&);
    HoloInputModeChangeScreenEventData(HoloInputModeChangeScreenEventData const&);
    HoloInputModeChangeScreenEventData();
};
