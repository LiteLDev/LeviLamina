#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MoveActorAbsoluteData {

public:
    // prevent constructor by default
    MoveActorAbsoluteData& operator=(MoveActorAbsoluteData const&) = delete;
    MoveActorAbsoluteData(MoveActorAbsoluteData const&)            = delete;

    union Header {
        unsigned char mRaw;                  // this+0x0
        bool          mIsOnGround;           // this(bf)+0x0:0x0 len(0x1)
        bool          mTeleported;           // this(bf)+0x0:0x1 len(0x1)
        bool          mForceMoveLocalEntity; // this(bf)+0x0:0x2 len(0x1)
    };

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0MoveActorAbsoluteData\@\@QEAA\@XZ
     */
    MCAPI MoveActorAbsoluteData();
    /**
     * @symbol ??0MoveActorAbsoluteData\@\@QEAA\@AEBVActor\@\@\@Z
     */
    MCAPI MoveActorAbsoluteData(class Actor const&);
    /**
     * @symbol ?calculateDelta\@MoveActorAbsoluteData\@\@QEBA?AVMoveActorDeltaData\@\@AEBV1\@\@Z
     */
    MCAPI class MoveActorDeltaData calculateDelta(class MoveActorAbsoluteData const&) const;
    /**
     * @symbol ?getRot\@MoveActorAbsoluteData\@\@QEBA?AVVec2\@\@XZ
     */
    MCAPI class Vec2 getRot() const;
    /**
     * @symbol ?getYBodyRot\@MoveActorAbsoluteData\@\@QEBAMXZ
     */
    MCAPI float getYBodyRot() const;
    /**
     * @symbol ?getYHeadRot\@MoveActorAbsoluteData\@\@QEBAMXZ
     */
    MCAPI float getYHeadRot() const;
    /**
     * @symbol ?isDifferenceSignificant\@MoveActorAbsoluteData\@\@QEBA_NAEBV1\@AEBVVec3\@\@\@Z
     */
    MCAPI bool isDifferenceSignificant(class MoveActorAbsoluteData const&, class Vec3 const&) const;
    /**
     * @symbol ?setRot\@MoveActorAbsoluteData\@\@QEAAXAEBVVec2\@\@\@Z
     */
    MCAPI void setRot(class Vec2 const&);
    /**
     * @symbol ?setYBodyRot\@MoveActorAbsoluteData\@\@QEAAXM\@Z
     */
    MCAPI void setYBodyRot(float);
    /**
     * @symbol ?setYHeadRot\@MoveActorAbsoluteData\@\@QEAAXM\@Z
     */
    MCAPI void setYHeadRot(float);
    // NOLINTEND
};
