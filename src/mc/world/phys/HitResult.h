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
    [[nodiscard]] constexpr explicit operator bool() const {
        return mType == HitResultType::Tile || mType == HitResultType::Entity;
    }

    HitResult(::HitResult&&) = default;

public:
    // member variables
    // NOLINTBEGIN
    ::Vec3          mStartPos;
    ::Vec3          mRayDir;
    ::HitResultType mType;
    uchar           mFacing;
    ::BlockPos      mBlock;
    ::Vec3          mPos;
    ::WeakEntityRef mEntity;
    ::AABB          mEntityAABB;
    bool            mIsHitLiquid;
    uchar           mLiquidFacing;
    ::BlockPos      mLiquid;
    ::Vec3          mLiquidPos;
    bool            mIndirectHit;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HitResult();

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
