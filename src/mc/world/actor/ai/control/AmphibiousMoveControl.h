#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/MoveControl.h"

class AmphibiousMoveControl : public ::MoveControl {

public:
    // prevent constructor by default
    AmphibiousMoveControl& operator=(AmphibiousMoveControl const&) = delete;
    AmphibiousMoveControl(AmphibiousMoveControl const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?tick\@AmphibiousMoveControl\@\@UEAAXAEAVMoveControlComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void tick(class MoveControlComponent&, class Mob&);
    /**
     * @symbol ??0AmphibiousMoveControl\@\@QEAA\@XZ
     */
    MCAPI AmphibiousMoveControl();
    // NOLINTEND
};
