#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ControlledByPlayerGoal {

public:
    // prevent constructor by default
    ControlledByPlayerGoal& operator=(ControlledByPlayerGoal const&) = delete;
    ControlledByPlayerGoal(ControlledByPlayerGoal const&)            = delete;
    ControlledByPlayerGoal()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@ControlledByPlayerGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@ControlledByPlayerGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@ControlledByPlayerGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@ControlledByPlayerGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@ControlledByPlayerGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0ControlledByPlayerGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI ControlledByPlayerGoal(class Mob&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_canBeControlledByPassenger\@ControlledByPlayerGoal\@\@AEAA_NXZ
     */
    MCAPI bool _canBeControlledByPassenger();
    // NOLINTEND
};
