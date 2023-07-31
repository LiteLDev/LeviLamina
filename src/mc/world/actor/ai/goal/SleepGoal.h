#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/MoveToPOIGoal.h"

class SleepGoal : public ::MoveToPOIGoal {

public:
    // prevent constructor by default
    SleepGoal& operator=(SleepGoal const&) = delete;
    SleepGoal(SleepGoal const&)            = delete;
    SleepGoal()                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@SleepGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@SleepGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@SleepGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@SleepGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@SleepGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@SleepGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl 16
     * @symbol ?_getRepathTime\@SleepGoal\@\@EEBA_KXZ
     */
    virtual uint64_t _getRepathTime() const;
    /**
     * @symbol ??0SleepGoal\@\@QEAA\@AEAVMob\@\@MMM_NMHM\@Z
     */
    MCAPI SleepGoal(class Mob&, float, float, float, bool, float, int, float);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_lockPosToBedPos\@SleepGoal\@\@AEAAXXZ
     */
    MCAPI void _lockPosToBedPos();
    /**
     * @symbol ?_wakeUp\@SleepGoal\@\@AEAAXXZ
     */
    MCAPI void _wakeUp();
    // NOLINTEND
};
