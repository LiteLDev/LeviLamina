#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ExploreOutskirtsGoal {

public:
    // prevent constructor by default
    ExploreOutskirtsGoal& operator=(ExploreOutskirtsGoal const&) = delete;
    ExploreOutskirtsGoal(ExploreOutskirtsGoal const&)            = delete;
    ExploreOutskirtsGoal()                                       = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@ExploreOutskirtsGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@ExploreOutskirtsGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@ExploreOutskirtsGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@ExploreOutskirtsGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@ExploreOutskirtsGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@ExploreOutskirtsGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ??0ExploreOutskirtsGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI ExploreOutskirtsGoal(class Mob&); // NOLINT
};
