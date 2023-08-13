#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class RandomLookAroundGoal : public ::Goal {

public:
    // prevent constructor by default
    RandomLookAroundGoal& operator=(RandomLookAroundGoal const&) = delete;
    RandomLookAroundGoal(RandomLookAroundGoal const&)            = delete;
    RandomLookAroundGoal()                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@RandomLookAroundGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@RandomLookAroundGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 4
     * @symbol ?start\@RandomLookAroundGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 6
     * @symbol ?tick\@RandomLookAroundGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@RandomLookAroundGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0RandomLookAroundGoal\@\@QEAA\@AEAVMob\@\@HHMMM\@Z
     */
    MCAPI RandomLookAroundGoal(class Mob&, int, int, float, float, float);
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?_setRandomLook\@RandomLookAroundGoal\@\@IEAAXXZ
     */
    MCAPI void _setRandomLook();
    // NOLINTEND
};
