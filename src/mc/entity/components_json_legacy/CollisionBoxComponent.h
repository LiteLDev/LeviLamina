#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec2;
class Vec3;
// clang-format on

class CollisionBoxComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk518745;
    // NOLINTEND

public:
    // prevent constructor by default
    CollisionBoxComponent& operator=(CollisionBoxComponent const&);
    CollisionBoxComponent(CollisionBoxComponent const&);
    CollisionBoxComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void fromVec3(::Vec3 const& vec);

    MCAPI ::Vec2 const& getDefaultBB() const;
    // NOLINTEND
};
