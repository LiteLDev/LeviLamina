#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/phys/HitResultType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class Vec3;
class WeakEntityRef;
struct AABBHitResult;
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
    ::ll::TypedStorage<1, 1, bool>             mIsHitLiquid;
    ::ll::TypedStorage<1, 1, uchar>            mLiquidFacing;
    ::ll::TypedStorage<4, 12, ::BlockPos>      mLiquid;
    ::ll::TypedStorage<4, 12, ::Vec3>          mLiquidPos;
    ::ll::TypedStorage<1, 1, bool>             mIndirectHit;
    // NOLINTEND

public:
    // prevent constructor by default
    HitResult(HitResult const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HitResult();

    MCAPI explicit HitResult(::AABBHitResult const& hit);

    MCAPI HitResult(::Vec3 const& startPos, ::Vec3 const& rayDir, ::Actor& entity);

    MCAPI HitResult(::Vec3 const& startPos, ::Vec3 const& rayDir, ::Vec3 const& rayEnd);

    MCAPI HitResult(::Vec3 const& startPos, ::Vec3 const& rayDir, ::Actor& entity, ::Vec3 const& pos);

    MCAPI HitResult(
        ::Vec3 const&     startPos,
        ::Vec3 const&     rayDir,
        ::BlockPos const& blockPos,
        uchar             facing,
        ::Vec3 const&     pos
    );

    MCAPI float distanceTo(::Actor const& otherEntity) const;

    MCAPI ::Actor* getEntity() const;

    MCAPI ::HitResult& operator=(::HitResult&&);

    MCAPI ::HitResult& operator=(::HitResult const&);

    MCAPI void setIsHitLiquid(bool isHit, ::HitResult const& liquidHit);

    MCAPI ~HitResult();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::AABBHitResult const& hit);

    MCAPI void* $ctor(::Vec3 const& startPos, ::Vec3 const& rayDir, ::Actor& entity);

    MCAPI void* $ctor(::Vec3 const& startPos, ::Vec3 const& rayDir, ::Vec3 const& rayEnd);

    MCAPI void* $ctor(::Vec3 const& startPos, ::Vec3 const& rayDir, ::Actor& entity, ::Vec3 const& pos);

    MCAPI void*
    $ctor(::Vec3 const& startPos, ::Vec3 const& rayDir, ::BlockPos const& blockPos, uchar facing, ::Vec3 const& pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
