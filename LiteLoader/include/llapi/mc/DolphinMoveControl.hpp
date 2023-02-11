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
     * @hash   1769752728
     * @vftbl  2
     * @symbol  ?tick\@DolphinMoveControl\@\@MEAAXAEAVMoveControlComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void tick(class MoveControlComponent &, class Mob &);
    /**
     * @hash   -2142259142
     * @symbol  ??0DolphinMoveControl\@\@QEAA\@XZ
     */
    MCAPI DolphinMoveControl();

//private:
    /**
     * @hash   1768324375
     * @symbol  ?_calcRotX\@DolphinMoveControl\@\@AEAAMMMM\@Z
     */
    MCAPI float _calcRotX(float, float, float);
    /**
     * @hash   -555475652
     * @symbol  ?_calcRotY\@DolphinMoveControl\@\@AEAAMMM\@Z
     */
    MCAPI float _calcRotY(float, float);
    /**
     * @hash   1771073388
     * @symbol  ?_clearOfObstacles\@DolphinMoveControl\@\@AEBA_NAEBVMob\@\@MMH\@Z
     */
    MCAPI bool _clearOfObstacles(class Mob const &, float, float, int) const;
    /**
     * @hash   1561684983
     * @symbol  ?_isInWater\@DolphinMoveControl\@\@AEBA_NAEBVMob\@\@\@Z
     */
    MCAPI bool _isInWater(class Mob const &) const;
    /**
     * @hash   451688719
     * @symbol  ?_setupBreach\@DolphinMoveControl\@\@AEAAXAEAVMob\@\@\@Z
     */
    MCAPI void _setupBreach(class Mob &);

private:

};