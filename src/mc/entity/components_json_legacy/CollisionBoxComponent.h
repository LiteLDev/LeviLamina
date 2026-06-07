#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

class CollisionBoxComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::Vec2> mBBDim;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD void fromVec3(::Vec3 const& vec);

    MCFOLD ::Vec2 const& getDefaultBB() const;
    // NOLINTEND
};
