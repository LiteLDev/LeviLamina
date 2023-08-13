#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class AvoidMobTypeGoal : public ::Goal {

public:
    // prevent constructor by default
    AvoidMobTypeGoal& operator=(AvoidMobTypeGoal const&) = delete;
    AvoidMobTypeGoal(AvoidMobTypeGoal const&)            = delete;
    AvoidMobTypeGoal()                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@AvoidMobTypeGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@AvoidMobTypeGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 4
     * @symbol ?start\@AvoidMobTypeGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@AvoidMobTypeGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@AvoidMobTypeGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@AvoidMobTypeGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0AvoidMobTypeGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI AvoidMobTypeGoal(class Mob&);
    /**
     * @symbol ?canFindAvoidPath\@AvoidMobTypeGoal\@\@QEAA_NPEAVActor\@\@\@Z
     */
    MCAPI bool canFindAvoidPath(class Actor*);
    /**
     * @symbol ?findNearestEntityToAvoid\@AvoidMobTypeGoal\@\@QEAAPEAVActor\@\@M\@Z
     */
    MCAPI class Actor* findNearestEntityToAvoid(float);
    // NOLINTEND
};
