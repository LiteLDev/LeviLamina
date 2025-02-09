#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/enums/ButtonState.h"
#include "mc/deps/input/enums/RawInputType.h"

struct RawInputScreenEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>            id;
    ::ll::TypedStorage<1, 1, ::RawInputType> keyType;
    ::ll::TypedStorage<1, 1, ::ButtonState>  state;
    ::ll::TypedStorage<1, 1, bool>           allowRemapping;
    // NOLINTEND
};
