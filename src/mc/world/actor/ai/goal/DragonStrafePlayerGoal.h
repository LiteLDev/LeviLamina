#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DragonStrafePlayerGoal {

public:
    // prevent constructor by default
    DragonStrafePlayerGoal& operator=(DragonStrafePlayerGoal const&) = delete;
    DragonStrafePlayerGoal(DragonStrafePlayerGoal const&)            = delete;
    DragonStrafePlayerGoal()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@DragonStrafePlayerGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@DragonStrafePlayerGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@DragonStrafePlayerGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@DragonStrafePlayerGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@DragonStrafePlayerGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@DragonStrafePlayerGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0DragonStrafePlayerGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI DragonStrafePlayerGoal(class Mob&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?findNewTarget\@DragonStrafePlayerGoal\@\@AEAAXXZ
     */
    MCAPI void findNewTarget();
    /**
     * @symbol ?navigateToNextPathNode\@DragonStrafePlayerGoal\@\@AEAAXXZ
     */
    MCAPI void navigateToNextPathNode();
    /**
     * @symbol ?setTarget\@DragonStrafePlayerGoal\@\@AEAAXPEAVActor\@\@\@Z
     */
    MCAPI void setTarget(class Actor*);
    // NOLINTEND
};
