#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MovementAbilitiesComponent {
public:
    // MovementAbilitiesComponent inner types define
    using Bitset = ::std::bitset<8>;
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::std::bitset<8>> mOverrides;
    ::ll::TypedStorage<4, 4, ::std::bitset<8>> mFlagValues;
    ::ll::TypedStorage<4, 8, ::std::array<float, 2>> mFloatValues;
    // NOLINTEND

};
