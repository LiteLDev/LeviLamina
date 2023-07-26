#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HopMoveControl {

public:
    // prevent constructor by default
    HopMoveControl& operator=(HopMoveControl const&) = delete;
    HopMoveControl(HopMoveControl const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?tick\@HopMoveControl\@\@MEAAXAEAVMoveControlComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void tick(class MoveControlComponent&, class Mob&); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?setWantedPosition\@HopMoveControl\@\@MEAAXAEAVMoveControlComponent\@\@AEAVMob\@\@AEBVVec3\@\@M\@Z
     */
    virtual void setWantedPosition(class MoveControlComponent&, class Mob&, class Vec3 const&, float); // NOLINT
    /**
     * @symbol ??0HopMoveControl\@\@QEAA\@XZ
     */
    MCAPI HopMoveControl(); // NOLINT
};
