#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/RandomStrollGoal.h"

class RandomFlyingGoal : public ::RandomStrollGoal {

public:
    // prevent constructor by default
    RandomFlyingGoal& operator=(RandomFlyingGoal const&) = delete;
    RandomFlyingGoal(RandomFlyingGoal const&)            = delete;
    RandomFlyingGoal()                                   = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@RandomFlyingGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@RandomFlyingGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8(); // NOLINT
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9(); // NOLINT
    /**
     * @vftbl 10
     * @symbol ?_setWantedPosition\@RandomFlyingGoal\@\@MEAA_NXZ
     */
    virtual bool _setWantedPosition(); // NOLINT
    /**
     * @symbol ??0RandomFlyingGoal\@\@QEAA\@AEAVMob\@\@MHH_N\@Z
     */
    MCAPI RandomFlyingGoal(class Mob&, float, int, int, bool); // NOLINT

    // private:
    /**
     * @symbol ?_getTreePos\@RandomFlyingGoal\@\@AEBA_NAEAVVec3\@\@\@Z
     */
    MCAPI bool _getTreePos(class Vec3&) const; // NOLINT

private:
};
