#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/vanilla_components/utilities/CollisionShapes.h"
#include "mc/world/phys/AABB.h"

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
    MCNAPI ~RewindCollisionShapesComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
