#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TextCharEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 5, ::std::array<char, 5>> utf8text;
    ::ll::TypedStorage<1, 1, bool>                  keepImePosition;
    // NOLINTEND
};
