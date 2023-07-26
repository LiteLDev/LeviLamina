#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/MoveControl.h"

class SwimMoveControl : public ::MoveControl {

public:
    // prevent constructor by default
    SwimMoveControl& operator=(SwimMoveControl const&) = delete;
    SwimMoveControl(SwimMoveControl const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?initializeInternal\@SwimMoveControl\@\@UEAAXAEAVMob\@\@PEAUMoveControlDescription\@\@\@Z
     */
    virtual void initializeInternal(class Mob&, struct MoveControlDescription*); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?tick\@SwimMoveControl\@\@MEAAXAEAVMoveControlComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void tick(class MoveControlComponent&, class Mob&); // NOLINT
    /**
     * @symbol ??0SwimMoveControl\@\@QEAA\@XZ
     */
    MCAPI SwimMoveControl(); // NOLINT
};
