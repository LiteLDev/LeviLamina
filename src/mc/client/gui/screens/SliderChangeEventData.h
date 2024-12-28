#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SliderChangeEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkb552ab;
    ::ll::UntypedStorage<4, 4> mUnk2f7e4c;
    ::ll::UntypedStorage<4, 4> mUnk6625da;
    ::ll::UntypedStorage<1, 1> mUnkb9227e;
    ::ll::UntypedStorage<8, 8> mUnkfae136;
    // NOLINTEND

public:
    // prevent constructor by default
    SliderChangeEventData& operator=(SliderChangeEventData const&);
    SliderChangeEventData(SliderChangeEventData const&);
    SliderChangeEventData();
};
