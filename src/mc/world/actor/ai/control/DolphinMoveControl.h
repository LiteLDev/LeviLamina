#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/MoveControl.h"

class DolphinMoveControl : public ::MoveControl {

public:
    // prevent constructor by default
    DolphinMoveControl& operator=(DolphinMoveControl const&) = delete;
    DolphinMoveControl(DolphinMoveControl const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?tick\@DolphinMoveControl\@\@MEAAXAEAVMoveControlComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void tick(class MoveControlComponent&, class Mob&);
    /**
     * @symbol ??0DolphinMoveControl\@\@QEAA\@XZ
     */
    MCAPI DolphinMoveControl();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_calcRotX\@DolphinMoveControl\@\@AEAAMMMM\@Z
     */
    MCAPI float _calcRotX(float, float, float);
    /**
     * @symbol ?_calcRotY\@DolphinMoveControl\@\@AEAAMMM\@Z
     */
    MCAPI float _calcRotY(float, float);
    /**
     * @symbol ?_clearOfObstacles\@DolphinMoveControl\@\@AEBA_NAEBVMob\@\@MMH\@Z
     */
    MCAPI bool _clearOfObstacles(class Mob const&, float, float, int) const;
    /**
     * @symbol ?_isInWater\@DolphinMoveControl\@\@AEBA_NAEBVMob\@\@\@Z
     */
    MCAPI bool _isInWater(class Mob const&) const;
    /**
     * @symbol ?_setupBreach\@DolphinMoveControl\@\@AEAAXAEAVMob\@\@\@Z
     */
    MCAPI void _setupBreach(class Mob&);
    // NOLINTEND
};
