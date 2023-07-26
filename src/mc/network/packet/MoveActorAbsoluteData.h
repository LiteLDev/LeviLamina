#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MoveActorAbsoluteData {

public:
    // prevent constructor by default
    MoveActorAbsoluteData& operator=(MoveActorAbsoluteData const&) = delete;
    MoveActorAbsoluteData(MoveActorAbsoluteData const&)            = delete;

public:
    /**
     * @symbol ??0MoveActorAbsoluteData\@\@QEAA\@XZ
     */
    MCAPI MoveActorAbsoluteData(); // NOLINT
    /**
     * @symbol ??0MoveActorAbsoluteData\@\@QEAA\@AEBVActor\@\@\@Z
     */
    MCAPI MoveActorAbsoluteData(class Actor const&); // NOLINT
    /**
     * @symbol ?calculateDelta\@MoveActorAbsoluteData\@\@QEBA?AVMoveActorDeltaData\@\@AEBV1\@\@Z
     */
    MCAPI class MoveActorDeltaData calculateDelta(class MoveActorAbsoluteData const&) const; // NOLINT
    /**
     * @symbol ?getRot\@MoveActorAbsoluteData\@\@QEBA?AVVec2\@\@XZ
     */
    MCAPI class Vec2 getRot() const; // NOLINT
    /**
     * @symbol ?getYBodyRot\@MoveActorAbsoluteData\@\@QEBAMXZ
     */
    MCAPI float getYBodyRot() const; // NOLINT
    /**
     * @symbol ?getYHeadRot\@MoveActorAbsoluteData\@\@QEBAMXZ
     */
    MCAPI float getYHeadRot() const; // NOLINT
    /**
     * @symbol ?isDifferenceSignificant\@MoveActorAbsoluteData\@\@QEBA_NAEBV1\@AEBVVec3\@\@\@Z
     */
    MCAPI bool isDifferenceSignificant(class MoveActorAbsoluteData const&, class Vec3 const&) const; // NOLINT
    /**
     * @symbol ?setRot\@MoveActorAbsoluteData\@\@QEAAXAEBVVec2\@\@\@Z
     */
    MCAPI void setRot(class Vec2 const&); // NOLINT
    /**
     * @symbol ?setYBodyRot\@MoveActorAbsoluteData\@\@QEAAXM\@Z
     */
    MCAPI void setYBodyRot(float); // NOLINT
    /**
     * @symbol ?setYHeadRot\@MoveActorAbsoluteData\@\@QEAAXM\@Z
     */
    MCAPI void setYHeadRot(float); // NOLINT
};
