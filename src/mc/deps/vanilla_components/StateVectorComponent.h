#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

struct StateVectorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk452b3f;
    ::ll::UntypedStorage<4, 12> mUnkc275c4;
    ::ll::UntypedStorage<4, 12> mUnk4a2ea4;
    // NOLINTEND

public:
    // prevent constructor by default
    StateVectorComponent& operator=(StateVectorComponent const&);
    StateVectorComponent(StateVectorComponent const&);
    StateVectorComponent();

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Vec3 const& ABS_LIMIT();
    // NOLINTEND
};
