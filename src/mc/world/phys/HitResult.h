#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/FacingID.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/phys/HitResultType.h"

class HitResult {
public:
    Vec3          mStartPos;     // this+0x0
    Vec3          mRayDir;       // this+0xC
    HitResultType mType;         // this+0x18
    FacingID      mFacing;       // this+0x1C
    BlockPos      mBlockPos;     // this+0x20
    Vec3          mPos;          // this+0x2C
    WeakEntityRef mEntity;       // this+0x38
    bool          mIsHitLiquid;  // this+0x50
    FacingID      mLiquidFacing; // this+0x51
    BlockPos      mLiquid;       // this+0x54
    Vec3          mLiquidPos;    // this+0x60
    bool          mIndirectHit;  // this+0x6C

    [[nodiscard]] constexpr explicit operator bool() const {
        return mType == HitResultType::Tile || mType == HitResultType::Entity;
    }

    // NOLINTBEGIN
    MCAPI HitResult();

    MCAPI HitResult(class HitResult&&);

    MCAPI HitResult(class HitResult const&);

    MCAPI HitResult(class Vec3 const& startPos, class Vec3 const& rayDir, class Actor& actor);

    MCAPI HitResult(class Vec3 const& startPos, class Vec3 const& rayDir, class Vec3 const& hitPos);

    MCAPI HitResult(class Vec3 const& startPos, class Vec3 const& rayDir, class Actor& actor, class Vec3 const& hitPos);

    MCAPI
    HitResult(
        class Vec3 const&     startPos,
        class Vec3 const&     rayDir,
        class BlockPos const& blockPos,
        uchar                 facing,
        class Vec3 const&     pos
    );

    MCAPI float distanceTo(class Actor const& otherEntity) const;

    MCAPI class Actor* getEntity() const;

    MCAPI class HitResult& operator=(class HitResult&&);

    MCAPI class HitResult& operator=(class HitResult const&);

    MCAPI void setIsHitLiquid(bool isHit, class HitResult const& liquidHit);

    MCAPI ~HitResult();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class Vec3 const& startPos, class Vec3 const& rayDir, class Actor& entity);

    MCAPI void* ctor$();

    MCAPI void* ctor$(
        class Vec3 const&     startPos,
        class Vec3 const&     rayDir,
        class BlockPos const& blockPos,
        uchar                 facing,
        class Vec3 const&     pos
    );

    MCAPI void* ctor$(class Vec3 const& startPos, class Vec3 const& rayDir, class Actor& entity, class Vec3 const& pos);

    MCAPI void* ctor$(class Vec3 const& startPos, class Vec3 const& rayDir, class Vec3 const& rayEnd);

    MCAPI void* ctor$(class HitResult const&);

    MCAPI void* ctor$(class HitResult&&);

    MCAPI void dtor$();

    // NOLINTEND
};
