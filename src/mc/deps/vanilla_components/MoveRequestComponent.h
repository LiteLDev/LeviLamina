#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/vanilla_components/utilities/CollisionShapes.h"
#include "mc/world/phys/AABB.h"

struct MoveRequestComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::AABB>            mOriginalAABBShape;
    ::ll::TypedStorage<4, 24, ::AABB>            mMoveCollisionLastFetchedBox;
    ::ll::TypedStorage<4, 12, ::Vec3>            mPreCollisionSpeed;
    ::ll::TypedStorage<4, 12, ::Vec3>            mSpeed;
    ::ll::TypedStorage<4, 12, ::Vec3>            mMaxDepenetration;
    ::ll::TypedStorage<1, 1, bool>               mIsPenetrating;
    ::ll::TypedStorage<1, 1, bool>               mSneaking;
    ::ll::TypedStorage<8, 56, ::CollisionShapes> mCollisionShapes;
    ::ll::TypedStorage<4, 8, ::Vec2>             mPreviousHorizontalDelta;
    // NOLINTEND
};
