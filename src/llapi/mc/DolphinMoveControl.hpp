/**
 * @file  DolphinMoveControl.hpp
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
 * @brief MC class DolphinMoveControl.
 *
 */
class DolphinMoveControl : public MoveControl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DOLPHINMOVECONTROL
public:
    class DolphinMoveControl& operator=(class DolphinMoveControl const &) = delete;
    DolphinMoveControl(class DolphinMoveControl const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DolphinMoveControl();
    /**
     * @vftbl  2
     * @symbol  ?tick\@DolphinMoveControl\@\@MEAAXAEAVMoveControlComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void tick(class MoveControlComponent &, class Mob &);
    /**
     * @symbol  ??0DolphinMoveControl\@\@QEAA\@XZ
     */
    MCAPI DolphinMoveControl();

//private:
    /**
     * @symbol  ?_calcRotX\@DolphinMoveControl\@\@AEAAMMMM\@Z
     */
    MCAPI float _calcRotX(float, float, float);
    /**
     * @symbol  ?_calcRotY\@DolphinMoveControl\@\@AEAAMMM\@Z
     */
    MCAPI float _calcRotY(float, float);
    /**
     * @symbol  ?_clearOfObstacles\@DolphinMoveControl\@\@AEBA_NAEBVMob\@\@MMH\@Z
     */
    MCAPI bool _clearOfObstacles(class Mob const &, float, float, int) const;
    /**
     * @symbol  ?_isInWater\@DolphinMoveControl\@\@AEBA_NAEBVMob\@\@\@Z
     */
    MCAPI bool _isInWater(class Mob const &) const;
    /**
     * @symbol  ?_setupBreach\@DolphinMoveControl\@\@AEAAXAEAVMob\@\@\@Z
     */
    MCAPI void _setupBreach(class Mob &);

private:

};