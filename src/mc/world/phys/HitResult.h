#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/WeakEntityRef.h"
#include "mc/enums/FacingID.h"
#include "mc/math/Vec3.h"
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
    // symbol: ??0HitResult@@QEAA@XZ
    MCAPI HitResult();

    // symbol: ??0HitResult@@QEAA@$$QEAV0@@Z
    MCAPI HitResult(class HitResult&&);

    // symbol: ??0HitResult@@QEAA@AEBV0@@Z
    MCAPI HitResult(class HitResult const&);

    // symbol: ??0HitResult@@QEAA@AEBVVec3@@0AEAVActor@@@Z
    MCAPI HitResult(class Vec3 const& startPos, class Vec3 const& rayDir, class Actor& actor);

    // symbol: ??0HitResult@@QEAA@AEBVVec3@@00@Z
    MCAPI HitResult(class Vec3 const& startPos, class Vec3 const& rayDir, class Vec3 const& hitPos);

    // symbol: ??0HitResult@@QEAA@AEBVVec3@@0AEAVActor@@0@Z
    MCAPI HitResult(class Vec3 const& startPos, class Vec3 const& rayDir, class Actor& actor, class Vec3 const& hitPos);

    // symbol: ??0HitResult@@QEAA@AEBVVec3@@0AEBVBlockPos@@E0@Z
    MCAPI
    HitResult(
        class Vec3 const&     startPos,
        class Vec3 const&     rayDir,
        class BlockPos const& blockPos,
        uchar                 facing,
        class Vec3 const&     pos
    );

    // symbol: ?distanceTo@HitResult@@QEBAMAEBVActor@@@Z
    MCAPI float distanceTo(class Actor const& otherEntity) const;

    // symbol: ?getEntity@HitResult@@QEBAPEAVActor@@XZ
    MCAPI class Actor* getEntity() const;

    // symbol: ??4HitResult@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class HitResult& operator=(class HitResult&&);

    // symbol: ??4HitResult@@QEAAAEAV0@AEBV0@@Z
    MCAPI class HitResult& operator=(class HitResult const&);

    // symbol: ?setIsHitLiquid@HitResult@@QEAAX_NAEBV1@@Z
    MCAPI void setIsHitLiquid(bool, class HitResult const&);

    // symbol: ??1HitResult@@QEAA@XZ
    MCAPI ~HitResult();

    // NOLINTEND
};
