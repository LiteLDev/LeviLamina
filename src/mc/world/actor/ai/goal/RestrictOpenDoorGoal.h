#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RestrictOpenDoorGoal {

public:
    // prevent constructor by default
    RestrictOpenDoorGoal& operator=(RestrictOpenDoorGoal const&) = delete;
    RestrictOpenDoorGoal(RestrictOpenDoorGoal const&)            = delete;
    RestrictOpenDoorGoal()                                       = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@RestrictOpenDoorGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@RestrictOpenDoorGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@RestrictOpenDoorGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@RestrictOpenDoorGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@RestrictOpenDoorGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ??0RestrictOpenDoorGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI RestrictOpenDoorGoal(class Mob&); // NOLINT
};
