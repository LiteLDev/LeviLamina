#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HoverScreenEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk65f75c;
    ::ll::UntypedStorage<1, 1> mUnk4200ac;
    // NOLINTEND

public:
    // prevent constructor by default
    HoverScreenEventData& operator=(HoverScreenEventData const&);
    HoverScreenEventData(HoverScreenEventData const&);
    HoverScreenEventData();
};
