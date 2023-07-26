#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LookAtActorGoal {

public:
    // prevent constructor by default
    LookAtActorGoal& operator=(LookAtActorGoal const&) = delete;
    LookAtActorGoal(LookAtActorGoal const&)            = delete;
    LookAtActorGoal()                                  = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@LookAtActorGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@LookAtActorGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@LookAtActorGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@LookAtActorGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@LookAtActorGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@LookAtActorGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOOKATACTORGOAL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~LookAtActorGoal(); // NOLINT
#endif
    /**
     * @symbol ??0LookAtActorGoal\@\@QEAA\@AEAVMob\@\@MMHHHH\@Z
     */
    MCAPI LookAtActorGoal(class Mob&, float, float, int, int, int, int); // NOLINT

    // private:
    /**
     * @symbol ?_withinFieldOfView\@LookAtActorGoal\@\@AEAA_NAEAVActor\@\@\@Z
     */
    MCAPI bool _withinFieldOfView(class Actor&); // NOLINT

private:
};
