/**
 * @file  MC/HoverMoveControl.hpp
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
 * @brief MC class HoverMoveControl.
 *
 */
class HoverMoveControl : public MoveControl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOVERMOVECONTROL
public:
    class HoverMoveControl& operator=(class HoverMoveControl const &) = delete;
    HoverMoveControl(class HoverMoveControl const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~HoverMoveControl();
    /**
     * @hash   1677263558
     * @vftbl  2
     * @symbol ?tick@HoverMoveControl@@MEAAXAEAVMoveControlComponent@@AEAVMob@@@Z
     */
    virtual void tick(class MoveControlComponent &, class Mob &);
    /**
     * @hash   214183100
     * @symbol ??0HoverMoveControl@@QEAA@XZ
     */
    MCAPI HoverMoveControl();

};