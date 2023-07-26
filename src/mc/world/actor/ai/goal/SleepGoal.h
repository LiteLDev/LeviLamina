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
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@SleepGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@SleepGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@SleepGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@SleepGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@SleepGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@SleepGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
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
     * @vftbl 16
     * @symbol ?_getRepathTime\@SleepGoal\@\@EEBA_KXZ
     */
    virtual unsigned __int64 _getRepathTime() const; // NOLINT
    /**
     * @symbol ??0SleepGoal\@\@QEAA\@AEAVMob\@\@MMM_NMHM\@Z
     */
    MCAPI SleepGoal(class Mob&, float, float, float, bool, float, int, float); // NOLINT

    // private:
    /**
     * @symbol ?_lockPosToBedPos\@SleepGoal\@\@AEAAXXZ
     */
    MCAPI void _lockPosToBedPos(); // NOLINT
    /**
     * @symbol ?_wakeUp\@SleepGoal\@\@AEAAXXZ
     */
    MCAPI void _wakeUp(); // NOLINT

private:
};
