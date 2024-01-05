#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MoveActorAbsoluteData {
public:
    union Header {
        uchar mRaw;                  // this+0x0
        bool  mIsOnGround;           // this(bf)+0x0:0x0 len(0x1)
        bool  mTeleported;           // this(bf)+0x0:0x1 len(0x1)
        bool  mForceMoveLocalEntity; // this(bf)+0x0:0x2 len(0x1)
    };

    ActorRuntimeID                mRuntimeId;
    MoveActorAbsoluteData::Header mHeader;
    Vec3                          mPos;
    schar                         mRotX;
    schar                         mRotY;
    schar                         mRotYHead;
    schar                         mRotYBody;

    // prevent constructor by default
    MoveActorAbsoluteData& operator=(MoveActorAbsoluteData const&);
    MoveActorAbsoluteData(MoveActorAbsoluteData const&);

public:
    // NOLINTBEGIN
    // symbol: ??0MoveActorAbsoluteData@@QEAA@XZ
    MCAPI MoveActorAbsoluteData();

    // symbol: ??0MoveActorAbsoluteData@@QEAA@AEBVActor@@@Z
    MCAPI explicit MoveActorAbsoluteData(class Actor const& entity);

    // symbol: ?calculateDelta@MoveActorAbsoluteData@@QEBA?AVMoveActorDeltaData@@AEBV1@@Z
    MCAPI class MoveActorDeltaData calculateDelta(class MoveActorAbsoluteData const& previousAbsoluteMoveData) const;

    // symbol: ?getRot@MoveActorAbsoluteData@@QEBA?AVVec2@@XZ
    MCAPI class Vec2 getRot() const;

    // symbol: ?getYBodyRot@MoveActorAbsoluteData@@QEBAMXZ
    MCAPI float getYBodyRot() const;

    // symbol: ?getYHeadRot@MoveActorAbsoluteData@@QEBAMXZ
    MCAPI float getYHeadRot() const;

    // symbol: ?isDifferenceSignificant@MoveActorAbsoluteData@@QEBA_NAEBV1@AEBVVec3@@@Z
    MCAPI bool isDifferenceSignificant(class MoveActorAbsoluteData const& old, class Vec3 const& velocity) const;

    // symbol: ?setRot@MoveActorAbsoluteData@@QEAAXAEBVVec2@@@Z
    MCAPI void setRot(class Vec2 const& rot);

    // symbol: ?setYBodyRot@MoveActorAbsoluteData@@QEAAXM@Z
    MCAPI void setYBodyRot(float rot);

    // symbol: ?setYHeadRot@MoveActorAbsoluteData@@QEAAXM@Z
    MCAPI void setYHeadRot(float rot);

    // NOLINTEND
};
