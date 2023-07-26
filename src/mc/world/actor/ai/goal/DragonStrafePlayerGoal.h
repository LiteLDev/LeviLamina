#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DragonStrafePlayerGoal {

public:
    // prevent constructor by default
    DragonStrafePlayerGoal& operator=(DragonStrafePlayerGoal const&) = delete;
    DragonStrafePlayerGoal(DragonStrafePlayerGoal const&)            = delete;
    DragonStrafePlayerGoal()                                         = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@DragonStrafePlayerGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@DragonStrafePlayerGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@DragonStrafePlayerGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@DragonStrafePlayerGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@DragonStrafePlayerGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@DragonStrafePlayerGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ??0DragonStrafePlayerGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI DragonStrafePlayerGoal(class Mob&); // NOLINT

    // private:
    /**
     * @symbol ?findNewTarget\@DragonStrafePlayerGoal\@\@AEAAXXZ
     */
    MCAPI void findNewTarget(); // NOLINT
    /**
     * @symbol ?navigateToNextPathNode\@DragonStrafePlayerGoal\@\@AEAAXXZ
     */
    MCAPI void navigateToNextPathNode(); // NOLINT
    /**
     * @symbol ?setTarget\@DragonStrafePlayerGoal\@\@AEAAXPEAVActor\@\@\@Z
     */
    MCAPI void setTarget(class Actor*); // NOLINT

private:
};
