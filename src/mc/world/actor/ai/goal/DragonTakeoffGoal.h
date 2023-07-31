#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DragonTakeoffGoal {

public:
    // prevent constructor by default
    DragonTakeoffGoal& operator=(DragonTakeoffGoal const&) = delete;
    DragonTakeoffGoal(DragonTakeoffGoal const&)            = delete;
    DragonTakeoffGoal()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@DragonTakeoffGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@DragonTakeoffGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@DragonTakeoffGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@DragonTakeoffGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@DragonTakeoffGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@DragonTakeoffGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0DragonTakeoffGoal\@\@QEAA\@AEAVEnderDragon\@\@\@Z
     */
    MCAPI DragonTakeoffGoal(class EnderDragon&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_findNewTarget\@DragonTakeoffGoal\@\@AEAAXXZ
     */
    MCAPI void _findNewTarget();
    // NOLINTEND
};
