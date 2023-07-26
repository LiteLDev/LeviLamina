#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AvoidMobTypeGoal {

public:
    // prevent constructor by default
    AvoidMobTypeGoal& operator=(AvoidMobTypeGoal const&) = delete;
    AvoidMobTypeGoal(AvoidMobTypeGoal const&)            = delete;
    AvoidMobTypeGoal()                                   = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@AvoidMobTypeGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@AvoidMobTypeGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@AvoidMobTypeGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@AvoidMobTypeGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@AvoidMobTypeGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@AvoidMobTypeGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ??0AvoidMobTypeGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI AvoidMobTypeGoal(class Mob&); // NOLINT
    /**
     * @symbol ?canFindAvoidPath\@AvoidMobTypeGoal\@\@QEAA_NPEAVActor\@\@\@Z
     */
    MCAPI bool canFindAvoidPath(class Actor*); // NOLINT
    /**
     * @symbol ?findNearestEntityToAvoid\@AvoidMobTypeGoal\@\@QEAAPEAVActor\@\@M\@Z
     */
    MCAPI class Actor* findNearestEntityToAvoid(float); // NOLINT
};
