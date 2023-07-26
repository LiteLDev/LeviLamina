/**
 * @file  HoverMoveControl.hpp
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
     * @symbol  __unk_destructor_0
     */
    virtual ~HoverMoveControl();
    /**
     * @vftbl  2
     * @symbol  ?tick\@HoverMoveControl\@\@MEAAXAEAVMoveControlComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void tick(class MoveControlComponent &, class Mob &);
    /**
     * @symbol  ??0HoverMoveControl\@\@QEAA\@XZ
     */
    MCAPI HoverMoveControl();

};