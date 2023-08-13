#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/RandomStrollGoal.h"

class RandomFlyingGoal : public ::RandomStrollGoal {

public:
    // prevent constructor by default
    RandomFlyingGoal& operator=(RandomFlyingGoal const&) = delete;
    RandomFlyingGoal(RandomFlyingGoal const&)            = delete;
    RandomFlyingGoal()                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@RandomFlyingGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@RandomFlyingGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @vftbl 10
     * @symbol ?_setWantedPosition\@RandomFlyingGoal\@\@MEAA_NXZ
     */
    virtual bool _setWantedPosition();
    /**
     * @symbol ??0RandomFlyingGoal\@\@QEAA\@AEAVMob\@\@MHH_N\@Z
     */
    MCAPI RandomFlyingGoal(class Mob&, float, int, int, bool);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_getTreePos\@RandomFlyingGoal\@\@AEBA_NAEAVVec3\@\@\@Z
     */
    MCAPI bool _getTreePos(class Vec3&) const;
    // NOLINTEND
};
