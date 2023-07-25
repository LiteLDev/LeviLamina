#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OpenDoorGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OPENDOORGOAL
public:
    OpenDoorGoal& operator=(OpenDoorGoal const&) = delete;
    OpenDoorGoal(OpenDoorGoal const&)            = delete;
    OpenDoorGoal()                               = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@OpenDoorGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@OpenDoorGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@OpenDoorGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@OpenDoorGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@OpenDoorGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@OpenDoorGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0OpenDoorGoal\@\@QEAA\@AEAVMob\@\@_N\@Z
     */
    MCAPI OpenDoorGoal(class Mob&, bool);
};
