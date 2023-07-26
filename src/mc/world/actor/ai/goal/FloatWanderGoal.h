#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FloatWanderGoal {

public:
    // prevent constructor by default
    FloatWanderGoal& operator=(FloatWanderGoal const&) = delete;
    FloatWanderGoal(FloatWanderGoal const&)            = delete;
    FloatWanderGoal()                                  = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@FloatWanderGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4(); // NOLINT
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@FloatWanderGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@FloatWanderGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ??0FloatWanderGoal\@\@QEAA\@AEAVMob\@\@MMM_N1UFloatRange\@\@\@Z
     */
    MCAPI FloatWanderGoal(class Mob&, float, float, float, bool, bool, struct FloatRange); // NOLINT

    // private:
    /**
     * @symbol ?_canReach\@FloatWanderGoal\@\@AEAA_NAEBVVec3\@\@M\@Z
     */
    MCAPI bool _canReach(class Vec3 const&, float); // NOLINT

private:
};
