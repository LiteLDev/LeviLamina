#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SendEventGoal {

public:
    // prevent constructor by default
    SendEventGoal& operator=(SendEventGoal const&) = delete;
    SendEventGoal(SendEventGoal const&)            = delete;
    SendEventGoal()                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@SendEventGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@SendEventGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@SendEventGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@SendEventGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@SendEventGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@SendEventGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol
     * ??0SendEventGoal\@\@QEAA\@AEAVMob\@\@AEBV?$vector\@USendEventData\@\@V?$allocator\@USendEventData\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI SendEventGoal(class Mob&, std::vector<struct SendEventData> const&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_selectBestSpell\@SendEventGoal\@\@AEAAHXZ
     */
    MCAPI int _selectBestSpell();
    // NOLINTEND
};
