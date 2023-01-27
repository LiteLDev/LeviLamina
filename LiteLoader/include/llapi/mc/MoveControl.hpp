/**
 * @file  MoveControl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveControl.
 *
 */
class MoveControl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVECONTROL
public:
    class MoveControl& operator=(class MoveControl const &) = delete;
    MoveControl(class MoveControl const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MoveControl();
    /**
     * @hash   -700614023
     * @vftbl  1
     * @symbol  ?initializeInternal\@MoveControl\@\@UEAAXAEAVMob\@\@PEAUMoveControlDescription\@\@\@Z
     */
    virtual void initializeInternal(class Mob &, struct MoveControlDescription *);
    /**
     * @hash   1400468506
     * @vftbl  2
     * @symbol  ?tick\@MoveControl\@\@MEAAXAEAVMoveControlComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void tick(class MoveControlComponent &, class Mob &);
    /**
     * @hash   714705319
     * @vftbl  3
     * @symbol  ?setWantedPosition\@MoveControl\@\@MEAAXAEAVMoveControlComponent\@\@AEAVMob\@\@AEBVVec3\@\@M\@Z
     */
    virtual void setWantedPosition(class MoveControlComponent &, class Mob &, class Vec3 const &, float);
    /**
     * @hash   -1659997320
     * @symbol  ??0MoveControl\@\@QEAA\@XZ
     */
    MCAPI MoveControl();
    /**
     * @hash   -46294319
     * @symbol  ?MIN_DELTA_TO_JUMP\@MoveControl\@\@2MB
     */
    MCAPI static float const MIN_DELTA_TO_JUMP;
    /**
     * @hash   -1073285833
     * @symbol  ?MIN_DELTA_TO_JUMP_UNDERWATER\@MoveControl\@\@2MB
     */
    MCAPI static float const MIN_DELTA_TO_JUMP_UNDERWATER;
    /**
     * @hash   -1667887405
     * @symbol  ?MIN_DELTA_TO_MOVE\@MoveControl\@\@2MB
     */
    MCAPI static float const MIN_DELTA_TO_MOVE;
    /**
     * @hash   -2033941379
     * @symbol  ?MIN_SPEED\@MoveControl\@\@2MB
     */
    MCAPI static float const MIN_SPEED;
    /**
     * @hash   -1697043157
     * @symbol  ?MIN_SPEED_SQR\@MoveControl\@\@2MB
     */
    MCAPI static float const MIN_SPEED_SQR;
    /**
     * @hash   -1479217065
     * @symbol  ?getDiffVector\@MoveControl\@\@SA?AVVec3\@\@AEBV2\@AEBVMob\@\@\@Z
     */
    MCAPI static class Vec3 getDiffVector(class Vec3 const &, class Mob const &);

//protected:
    /**
     * @hash   -315707541
     * @symbol  ?calculateMoveSpeed\@MoveControl\@\@IEAAMAEBVMoveControlComponent\@\@AEAVMob\@\@AEBVVec3\@\@M\@Z
     */
    MCAPI float calculateMoveSpeed(class MoveControlComponent const &, class Mob &, class Vec3 const &, float);
    /**
     * @hash   -1157076119
     * @symbol  ?calculateYRotation\@MoveControl\@\@IEAAMAEBVMoveControlComponent\@\@AEBVMob\@\@AEBVVec3\@\@M\@Z
     */
    MCAPI float calculateYRotation(class MoveControlComponent const &, class Mob const &, class Vec3 const &, float);

protected:

};