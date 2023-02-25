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
     * @vftbl  1
     * @symbol  ?initializeInternal\@MoveControl\@\@UEAAXAEAVMob\@\@PEAUMoveControlDescription\@\@\@Z
     */
    virtual void initializeInternal(class Mob &, struct MoveControlDescription *);
    /**
     * @vftbl  2
     * @symbol  ?tick\@MoveControl\@\@MEAAXAEAVMoveControlComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void tick(class MoveControlComponent &, class Mob &);
    /**
     * @vftbl  3
     * @symbol  ?setWantedPosition\@MoveControl\@\@MEAAXAEAVMoveControlComponent\@\@AEAVMob\@\@AEBVVec3\@\@M\@Z
     */
    virtual void setWantedPosition(class MoveControlComponent &, class Mob &, class Vec3 const &, float);
    /**
     * @symbol  ??0MoveControl\@\@QEAA\@XZ
     */
    MCAPI MoveControl();
    /**
     * @symbol  ?MIN_DELTA_TO_JUMP\@MoveControl\@\@2MB
     */
    MCAPI static float const MIN_DELTA_TO_JUMP;
    /**
     * @symbol  ?MIN_DELTA_TO_JUMP_UNDERWATER\@MoveControl\@\@2MB
     */
    MCAPI static float const MIN_DELTA_TO_JUMP_UNDERWATER;
    /**
     * @symbol  ?MIN_DELTA_TO_MOVE\@MoveControl\@\@2MB
     */
    MCAPI static float const MIN_DELTA_TO_MOVE;
    /**
     * @symbol  ?MIN_SPEED\@MoveControl\@\@2MB
     */
    MCAPI static float const MIN_SPEED;
    /**
     * @symbol  ?MIN_SPEED_SQR\@MoveControl\@\@2MB
     */
    MCAPI static float const MIN_SPEED_SQR;
    /**
     * @symbol  ?getDiffVector\@MoveControl\@\@SA?AVVec3\@\@AEBV2\@AEBVMob\@\@\@Z
     */
    MCAPI static class Vec3 getDiffVector(class Vec3 const &, class Mob const &);

//protected:
    /**
     * @symbol  ?calculateMoveSpeed\@MoveControl\@\@IEAAMAEBVMoveControlComponent\@\@AEAVMob\@\@AEBVVec3\@\@M\@Z
     */
    MCAPI float calculateMoveSpeed(class MoveControlComponent const &, class Mob &, class Vec3 const &, float);
    /**
     * @symbol  ?calculateYRotation\@MoveControl\@\@IEAAMAEBVMoveControlComponent\@\@AEBVMob\@\@AEBVVec3\@\@M\@Z
     */
    MCAPI float calculateYRotation(class MoveControlComponent const &, class Mob const &, class Vec3 const &, float);

protected:

};