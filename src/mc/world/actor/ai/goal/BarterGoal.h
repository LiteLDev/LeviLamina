#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BarterGoal {

public:
    // prevent constructor by default
    BarterGoal& operator=(BarterGoal const&) = delete;
    BarterGoal(BarterGoal const&)            = delete;
    BarterGoal()                             = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@BarterGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@BarterGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
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
     * @symbol ?tick\@BarterGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@BarterGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ??0BarterGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI BarterGoal(class Mob&); // NOLINT

    // private:
    /**
     * @symbol ?_getThrowVector\@BarterGoal\@\@AEAA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 _getThrowVector(); // NOLINT
    /**
     * @symbol ?_sendBarterEventPacket\@BarterGoal\@\@AEAAXPEAVBarterComponent\@\@\@Z
     */
    MCAPI void _sendBarterEventPacket(class BarterComponent*); // NOLINT

private:
};
