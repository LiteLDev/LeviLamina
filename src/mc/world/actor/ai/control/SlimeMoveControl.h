#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/MoveControl.h"

class SlimeMoveControl : public ::MoveControl {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLIMEMOVECONTROL
public:
    SlimeMoveControl& operator=(SlimeMoveControl const&) = delete;
    SlimeMoveControl(SlimeMoveControl const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?tick\@SlimeMoveControl\@\@MEAAXAEAVMoveControlComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void tick(class MoveControlComponent&, class Mob&);
    /**
     * @symbol ??0SlimeMoveControl\@\@QEAA\@XZ
     */
    MCAPI SlimeMoveControl();
};
