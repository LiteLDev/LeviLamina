#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/AbilitiesIndex.h"

struct AbilitiesRequest {
public:
    // AbilitiesRequest inner types define
    using Variant = ::std::variant<bool, float>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::AbilitiesIndex>            mIDToSet;
    ::ll::TypedStorage<4, 8, ::std::variant<bool, float>> mDesiredValue;
    // NOLINTEND
};
