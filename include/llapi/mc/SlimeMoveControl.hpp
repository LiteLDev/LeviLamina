/**
 * @file  SlimeMoveControl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "MoveControl.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SlimeMoveControl.
 *
 */
class SlimeMoveControl : public MoveControl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLIMEMOVECONTROL
public:
    class SlimeMoveControl& operator=(class SlimeMoveControl const &) = delete;
    SlimeMoveControl(class SlimeMoveControl const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SlimeMoveControl();
    /**
     * @vftbl  2
     * @symbol  ?tick\@SlimeMoveControl\@\@MEAAXAEAVMoveControlComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void tick(class MoveControlComponent &, class Mob &);
    /**
     * @symbol  ??0SlimeMoveControl\@\@QEAA\@XZ
     */
    MCAPI SlimeMoveControl();

};