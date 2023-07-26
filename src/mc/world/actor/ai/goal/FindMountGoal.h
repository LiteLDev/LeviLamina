#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FindMountGoal {

public:
    // prevent constructor by default
    FindMountGoal& operator=(FindMountGoal const&) = delete;
    FindMountGoal(FindMountGoal const&)            = delete;
    FindMountGoal()                                = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@FindMountGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@FindMountGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@FindMountGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@FindMountGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@FindMountGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@FindMountGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ??0FindMountGoal\@\@QEAA\@AEAVMob\@\@MH_N1MH\@Z
     */
    MCAPI FindMountGoal(class Mob&, float, int, bool, bool, float, int); // NOLINT
    /**
     * @symbol ?isInMountRange\@FindMountGoal\@\@QEAA_NXZ
     */
    MCAPI bool isInMountRange(); // NOLINT
};
