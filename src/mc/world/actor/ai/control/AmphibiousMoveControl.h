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
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?tick\@AmphibiousMoveControl\@\@UEAAXAEAVMoveControlComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void tick(class MoveControlComponent&, class Mob&); // NOLINT
    /**
     * @symbol ??0AmphibiousMoveControl\@\@QEAA\@XZ
     */
    MCAPI AmphibiousMoveControl(); // NOLINT
};
