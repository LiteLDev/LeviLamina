/**
 * @file  SwimMoveControl.hpp
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
 * @brief MC class SwimMoveControl.
 *
 */
class SwimMoveControl : public MoveControl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWIMMOVECONTROL
public:
    class SwimMoveControl& operator=(class SwimMoveControl const &) = delete;
    SwimMoveControl(class SwimMoveControl const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SwimMoveControl();
    /**
     * @hash   -2018156719
     * @vftbl  1
     * @symbol ?initializeInternal@SwimMoveControl@@UEAAXAEAVMob@@PEAUMoveControlDescription@@@Z
     */
    virtual void initializeInternal(class Mob &, struct MoveControlDescription *);
    /**
     * @hash   -1141888846
     * @vftbl  2
     * @symbol ?tick@SwimMoveControl@@MEAAXAEAVMoveControlComponent@@AEAVMob@@@Z
     */
    virtual void tick(class MoveControlComponent &, class Mob &);
    /**
     * @hash   -2020435008
     * @symbol ??0SwimMoveControl@@QEAA@XZ
     */
    MCAPI SwimMoveControl();

};