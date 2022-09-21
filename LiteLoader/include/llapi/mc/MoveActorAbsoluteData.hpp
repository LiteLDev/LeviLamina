/**
 * @file  MC/MoveActorAbsoluteData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   549694785
     * @symbol ??0MoveActorAbsoluteData@@QEAA@XZ
     */
    MCAPI MoveActorAbsoluteData();
    /**
     * @hash   -1188964822
     * @symbol ??0MoveActorAbsoluteData@@QEAA@AEBVActor@@@Z
     */
    MCAPI MoveActorAbsoluteData(class Actor const &);
    /**
     * @hash   -1074051017
     * @symbol ?calculateDelta@MoveActorAbsoluteData@@QEBA?AVMoveActorDeltaData@@AEBV1@@Z
     */
    MCAPI class MoveActorDeltaData calculateDelta(class MoveActorAbsoluteData const &) const;
    /**
     * @hash   -309919052
     * @symbol ?getRot@MoveActorAbsoluteData@@QEBA?AVVec2@@XZ
     */
    MCAPI class Vec2 getRot() const;
    /**
     * @hash   8964234
     * @symbol ?getYBodyRot@MoveActorAbsoluteData@@QEBAMXZ
     */
    MCAPI float getYBodyRot() const;
    /**
     * @hash   -714776162
     * @symbol ?getYHeadRot@MoveActorAbsoluteData@@QEBAMXZ
     */
    MCAPI float getYHeadRot() const;
    /**
     * @hash   -1227072124
     * @symbol ?isDifferenceSignificant@MoveActorAbsoluteData@@QEBA_NAEBV1@AEBVVec3@@@Z
     */
    MCAPI bool isDifferenceSignificant(class MoveActorAbsoluteData const &, class Vec3 const &) const;
    /**
     * @hash   -1084422474
     * @symbol ?setRot@MoveActorAbsoluteData@@QEAAXAEBVVec2@@@Z
     */
    MCAPI void setRot(class Vec2 const &);
    /**
     * @hash   2069422440
     * @symbol ?setYBodyRot@MoveActorAbsoluteData@@QEAAXM@Z
     */
    MCAPI void setYBodyRot(float);
    /**
     * @hash   1107860740
     * @symbol ?setYHeadRot@MoveActorAbsoluteData@@QEAAXM@Z
     */
    MCAPI void setYHeadRot(float);

};