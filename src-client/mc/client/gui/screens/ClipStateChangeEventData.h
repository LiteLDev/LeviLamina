#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct UIPropertyBag;
// clang-format on

struct ClipStateChangeEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>             id;
    ::ll::TypedStorage<8, 8, ::UIPropertyBag*> propertyBag;
    ::ll::TypedStorage<1, 1, bool>             isClipped;
    // NOLINTEND
};
