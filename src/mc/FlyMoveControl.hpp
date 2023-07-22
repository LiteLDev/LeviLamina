/**
 * @file  FlyMoveControl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "MoveControl.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FlyMoveControl.
 *
 */
class FlyMoveControl : public MoveControl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLYMOVECONTROL
public:
    class FlyMoveControl& operator=(class FlyMoveControl const &) = delete;
    FlyMoveControl(class FlyMoveControl const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~FlyMoveControl();
    /**
     * @vftbl  2
     * @symbol  ?tick\@FlyMoveControl\@\@MEAAXAEAVMoveControlComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void tick(class MoveControlComponent &, class Mob &);
    /**
     * @symbol  ??0FlyMoveControl\@\@QEAA\@XZ
     */
    MCAPI FlyMoveControl();

};