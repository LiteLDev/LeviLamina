/**
 * @file  MoveActorAbsoluteData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveActorAbsoluteData.
 *
 */
class MoveActorAbsoluteData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEACTORABSOLUTEDATA
public:
    class MoveActorAbsoluteData& operator=(class MoveActorAbsoluteData const &) = delete;
    MoveActorAbsoluteData(class MoveActorAbsoluteData const &) = delete;
#endif

public:
    /**
     * @symbol  ??0MoveActorAbsoluteData\@\@QEAA\@XZ
     */
    MCAPI MoveActorAbsoluteData();
    /**
     * @symbol  ??0MoveActorAbsoluteData\@\@QEAA\@AEBVActor\@\@\@Z
     */
    MCAPI MoveActorAbsoluteData(class Actor const &);
    /**
     * @symbol  ?calculateDelta\@MoveActorAbsoluteData\@\@QEBA?AVMoveActorDeltaData\@\@AEBV1\@\@Z
     */
    MCAPI class MoveActorDeltaData calculateDelta(class MoveActorAbsoluteData const &) const;
    /**
     * @symbol  ?getRot\@MoveActorAbsoluteData\@\@QEBA?AVVec2\@\@XZ
     */
    MCAPI class Vec2 getRot() const;
    /**
     * @symbol  ?getYBodyRot\@MoveActorAbsoluteData\@\@QEBAMXZ
     */
    MCAPI float getYBodyRot() const;
    /**
     * @symbol  ?getYHeadRot\@MoveActorAbsoluteData\@\@QEBAMXZ
     */
    MCAPI float getYHeadRot() const;
    /**
     * @symbol  ?isDifferenceSignificant\@MoveActorAbsoluteData\@\@QEBA_NAEBV1\@AEBVVec3\@\@\@Z
     */
    MCAPI bool isDifferenceSignificant(class MoveActorAbsoluteData const &, class Vec3 const &) const;
    /**
     * @symbol  ?setRot\@MoveActorAbsoluteData\@\@QEAAXAEBVVec2\@\@\@Z
     */
    MCAPI void setRot(class Vec2 const &);
    /**
     * @symbol  ?setYBodyRot\@MoveActorAbsoluteData\@\@QEAAXM\@Z
     */
    MCAPI void setYBodyRot(float);
    /**
     * @symbol  ?setYHeadRot\@MoveActorAbsoluteData\@\@QEAAXM\@Z
     */
    MCAPI void setYHeadRot(float);

};