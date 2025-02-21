#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Vec3;
struct CollisionShapes;
// clang-format on

struct RewindCollisionShapesComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>            mFetchedPosition;
    ::ll::TypedStorage<8, 56, ::CollisionShapes> mCollisionShapes;
    ::ll::TypedStorage<4, 24, ::AABB>            mMoveCollisionLastFetchedBox;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~RewindCollisionShapesComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
