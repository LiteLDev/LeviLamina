#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EndermanLeaveBlockGoal {

public:
    // prevent constructor by default
    EndermanLeaveBlockGoal& operator=(EndermanLeaveBlockGoal const&) = delete;
    EndermanLeaveBlockGoal(EndermanLeaveBlockGoal const&)            = delete;
    EndermanLeaveBlockGoal()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@EndermanLeaveBlockGoal\@\@UEAA_NXZ
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
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol ?tick\@EndermanLeaveBlockGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@EndermanLeaveBlockGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0EndermanLeaveBlockGoal\@\@QEAA\@AEAVEnderMan\@\@\@Z
     */
    MCAPI EndermanLeaveBlockGoal(class EnderMan&);
    // NOLINTEND
};
