#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/actor/Actor.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/phys/AABB.h"
#include "mc/world/phys/HitResultType.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct AABBHitResult;
// clang-format on

class HitResult {
public:
    [[nodiscard]] constexpr explicit operator bool() const {
        return mType == HitResultType::Tile || mType == HitResultType::Entity;
    }

    HitResult(::HitResult&&) = default;

    HitResult(
        ::Vec3 const& startPos,
        ::Vec3 const& rayDir,
        ::Actor&      entity,
        ::Vec3 const& pos,
        ::AABB const& entityAABB
    )
    : mStartPos(startPos),
      mRayDir(rayDir),
      mType(HitResultType::Entity),
      mFacing(0),
      mPos(pos),
      mEntity(entity.getEntityContext().getWeakRef()),
      mEntityAABB(entityAABB),
      mIsHitLiquid(false),
      mLiquidFacing(0),
      mIndirectHit(false) {}

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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    HitResult& operator=(HitResult const&);
    HitResult(HitResult const&);

#else // LL_PLAT_C
public:
    // prevent constructor by default
    HitResult(HitResult const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
    MCAPI HitResult();

    MCAPI explicit HitResult(::AABBHitResult const& hit);

    MCAPI HitResult(::Vec3 const& startPos, ::Vec3 const& rayDir, ::Actor& entity);

    MCAPI HitResult(::Vec3 const& startPos, ::Vec3 const& rayDir, ::Vec3 const& rayEnd);

#ifdef LL_PLAT_C
    MCAPI HitResult(::Vec3 const& startPos, ::Vec3 const& rayDir, ::Actor& entity, ::Vec3 const& pos);
#endif

    MCAPI HitResult(
        ::Vec3 const&     startPos,
        ::Vec3 const&     rayDir,
        ::BlockPos const& blockPos,
        uchar             facing,
        ::Vec3 const&     pos
    );

    MCAPI float distanceToSqr(::Actor const& otherEntity) const;

    MCAPI ::Actor* getEntity() const;

    MCAPI ::HitResult& operator=(::HitResult&&);

#ifdef LL_PLAT_C
    MCAPI ::HitResult& operator=(::HitResult const&);
#endif

    MCAPI void setIsHitLiquid(bool isHit, ::HitResult const& liquidHit);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::AABBHitResult const& hit);

    MCAPI void* $ctor(::Vec3 const& startPos, ::Vec3 const& rayDir, ::Actor& entity);

    MCAPI void* $ctor(::Vec3 const& startPos, ::Vec3 const& rayDir, ::Vec3 const& rayEnd);

#ifdef LL_PLAT_C
    MCAPI void* $ctor(::Vec3 const& startPos, ::Vec3 const& rayDir, ::Actor& entity, ::Vec3 const& pos);
#endif

    MCAPI void*
    $ctor(::Vec3 const& startPos, ::Vec3 const& rayDir, ::BlockPos const& blockPos, uchar facing, ::Vec3 const& pos);
    // NOLINTEND
};
