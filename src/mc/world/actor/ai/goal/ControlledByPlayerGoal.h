#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ControlledByPlayerGoal {

public:
    // prevent constructor by default
    ControlledByPlayerGoal& operator=(ControlledByPlayerGoal const&) = delete;
    ControlledByPlayerGoal(ControlledByPlayerGoal const&)            = delete;
    ControlledByPlayerGoal()                                         = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@ControlledByPlayerGoal\@\@UEAA_NXZ
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
     * @symbol ?start\@ControlledByPlayerGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@ControlledByPlayerGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@ControlledByPlayerGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@ControlledByPlayerGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ??0ControlledByPlayerGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI ControlledByPlayerGoal(class Mob&); // NOLINT

    // private:
    /**
     * @symbol ?_canBeControlledByPassenger\@ControlledByPlayerGoal\@\@AEAA_NXZ
     */
    MCAPI bool _canBeControlledByPassenger(); // NOLINT

private:
};
