/**
 * @file  HopMoveControl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MoveControl.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HopMoveControl.
 *
 */
class HopMoveControl : public MoveControl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOPMOVECONTROL
public:
    class HopMoveControl& operator=(class HopMoveControl const &) = delete;
    HopMoveControl(class HopMoveControl const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~HopMoveControl();
    /**
     * @hash   339023891
     * @vftbl  2
     * @symbol ?tick@HopMoveControl@@MEAAXAEAVMoveControlComponent@@AEAVMob@@@Z
     */
    virtual void tick(class MoveControlComponent &, class Mob &);
    /**
     * @hash   381101888
     * @vftbl  3
     * @symbol ?setWantedPosition@HopMoveControl@@MEAAXAEAVMoveControlComponent@@AEAVMob@@AEBVVec3@@M@Z
     */
    virtual void setWantedPosition(class MoveControlComponent &, class Mob &, class Vec3 const &, float);
    /**
     * @hash   -824636689
     * @symbol ??0HopMoveControl@@QEAA@XZ
     */
    MCAPI HopMoveControl();

};