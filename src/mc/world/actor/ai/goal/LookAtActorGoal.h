#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LookAtActorGoal {

public:
    // prevent constructor by default
    LookAtActorGoal& operator=(LookAtActorGoal const&) = delete;
    LookAtActorGoal(LookAtActorGoal const&)            = delete;
    LookAtActorGoal()                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@LookAtActorGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@LookAtActorGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@LookAtActorGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@LookAtActorGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@LookAtActorGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@LookAtActorGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOOKATACTORGOAL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~LookAtActorGoal();
#endif
    /**
     * @symbol ??0LookAtActorGoal\@\@QEAA\@AEAVMob\@\@MMHHHH\@Z
     */
    MCAPI LookAtActorGoal(class Mob&, float, float, int, int, int, int);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_withinFieldOfView\@LookAtActorGoal\@\@AEAA_NAEAVActor\@\@\@Z
     */
    MCAPI bool _withinFieldOfView(class Actor&);
    // NOLINTEND
};
