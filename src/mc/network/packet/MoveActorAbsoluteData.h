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
    MCAPI MoveActorAbsoluteData();

    MCAPI explicit MoveActorAbsoluteData(class Actor const& entity);

    MCAPI class MoveActorDeltaData calculateDelta(class MoveActorAbsoluteData const& previousAbsoluteMoveData) const;

    MCAPI class Vec2 getRot() const;

    MCAPI float getYBodyRot() const;

    MCAPI float getYHeadRot() const;

    MCAPI bool isDifferenceSignificant(class MoveActorAbsoluteData const& old, class Vec3 const& velocity) const;

    MCAPI void setRot(class Vec2 const& rot);

    MCAPI void setYBodyRot(float rot);

    MCAPI void setYHeadRot(float rot);

    // NOLINTEND
};
