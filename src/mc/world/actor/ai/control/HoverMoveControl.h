#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/MoveControl.h"

class HoverMoveControl : public ::MoveControl {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOVERMOVECONTROL
public:
    HoverMoveControl& operator=(HoverMoveControl const&) = delete;
    HoverMoveControl(HoverMoveControl const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?tick\@HoverMoveControl\@\@MEAAXAEAVMoveControlComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void tick(class MoveControlComponent&, class Mob&);
    /**
     * @symbol ??0HoverMoveControl\@\@QEAA\@XZ
     */
    MCAPI HoverMoveControl();
};
