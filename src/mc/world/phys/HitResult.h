#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/phys/AABB.h"
#include "mc/world/phys/HitResultType.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class HitResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>          mStartPos;
    ::ll::TypedStorage<4, 12, ::Vec3>          mRayDir;
    ::ll::TypedStorage<4, 4, ::HitResultType>  mType;
    ::ll::TypedStorage<1, 1, uchar>            mFacing;
    ::ll::TypedStorage<4, 12, ::BlockPos>      mBlock;
    ::ll::TypedStorage<4, 12, ::Vec3>          mPos;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mEntity;
    ::ll::TypedStorage<4, 24, ::AABB>          mEntityAABB;
    ::ll::TypedStorage<1, 1, bool>             mIsHitLiquid;
    ::ll::TypedStorage<1, 1, uchar>            mLiquidFacing;
    ::ll::TypedStorage<4, 12, ::BlockPos>      mLiquid;
    ::ll::TypedStorage<4, 12, ::Vec3>          mLiquidPos;
    ::ll::TypedStorage<1, 1, bool>             mIndirectHit;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HitResult();

    MCAPI HitResult(::HitResult&&);

    MCAPI HitResult(::HitResult const&);

    MCAPI HitResult(
        ::Vec3 const& startPos,
        ::Vec3 const& rayDir,
        ::Actor&      entity,
        ::Vec3 const& pos,
        ::AABB const& entityAABB
    );

    MCAPI ::Actor* getEntity() const;

    MCAPI ::HitResult& operator=(::HitResult&&);

    MCAPI ::HitResult& operator=(::HitResult const&);

    MCAPI_C void resetHitEntity();

    MCAPI ~HitResult();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::HitResult&&);

    MCAPI void* $ctor(::HitResult const&);

    MCAPI_C void* $ctor(::Vec3 const& startPos, ::Vec3 const& rayDir, ::Actor& entity, ::Vec3 const& pos);

    MCAPI void*
    $ctor(::Vec3 const& startPos, ::Vec3 const& rayDir, ::Actor& entity, ::Vec3 const& pos, ::AABB const& entityAABB);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
