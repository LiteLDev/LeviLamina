/**
 * @file  MC/MoveControl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~MoveControl();
    /**
     * @hash   -134069927
     * @vftbl  1
     * @symbol ?initializeInternal@MoveControl@@UEAAXAEAVMob@@PEAUMoveControlDescription@@@Z
     */
    virtual void initializeInternal(class Mob &, struct MoveControlDescription *);
    /**
     * @hash   1967012602
     * @vftbl  2
     * @symbol ?tick@MoveControl@@MEAAXAEAVMoveControlComponent@@AEAVMob@@@Z
     */
    virtual void tick(class MoveControlComponent &, class Mob &);
    /**
     * @hash   1281249415
     * @vftbl  3
     * @symbol ?setWantedPosition@MoveControl@@MEAAXAEAVMoveControlComponent@@AEAVMob@@AEBVVec3@@M@Z
     */
    virtual void setWantedPosition(class MoveControlComponent &, class Mob &, class Vec3 const &, float);
    /**
     * @hash   -1093407096
     * @symbol ??0MoveControl@@QEAA@XZ
     */
    MCAPI MoveControl();
    /**
     * @hash   -1026076103
     * @symbol ?MIN_DELTA_TO_JUMP@MoveControl@@2MB
     */
    MCAPI static float const MIN_DELTA_TO_JUMP;
    /**
     * @hash   -2053067617
     * @symbol ?MIN_DELTA_TO_JUMP_UNDERWATER@MoveControl@@2MB
     */
    MCAPI static float const MIN_DELTA_TO_JUMP_UNDERWATER;
    /**
     * @hash   1647298107
     * @symbol ?MIN_DELTA_TO_MOVE@MoveControl@@2MB
     */
    MCAPI static float const MIN_DELTA_TO_MOVE;
    /**
     * @hash   1281244133
     * @symbol ?MIN_SPEED@MoveControl@@2MB
     */
    MCAPI static float const MIN_SPEED;
    /**
     * @hash   1618142355
     * @symbol ?MIN_SPEED_SQR@MoveControl@@2MB
     */
    MCAPI static float const MIN_SPEED_SQR;
    /**
     * @hash   -912672969
     * @symbol ?getDiffVector@MoveControl@@SA?AVVec3@@AEBV2@AEBVMob@@@Z
     */
    MCAPI static class Vec3 getDiffVector(class Vec3 const &, class Mob const &);

//protected:
    /**
     * @hash   250882683
     * @symbol ?calculateMoveSpeed@MoveControl@@IEAAMAEBVMoveControlComponent@@AEAVMob@@AEBVVec3@@M@Z
     */
    MCAPI float calculateMoveSpeed(class MoveControlComponent const &, class Mob &, class Vec3 const &, float);
    /**
     * @hash   -590516647
     * @symbol ?calculateYRotation@MoveControl@@IEAAMAEBVMoveControlComponent@@AEBVMob@@AEBVVec3@@M@Z
     */
    MCAPI float calculateYRotation(class MoveControlComponent const &, class Mob const &, class Vec3 const &, float);

protected:

};