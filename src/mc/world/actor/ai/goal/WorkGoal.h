#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/MoveToPOIGoal.h"

class WorkGoal : public ::MoveToPOIGoal {

public:
    // prevent constructor by default
    WorkGoal& operator=(WorkGoal const&) = delete;
    WorkGoal(WorkGoal const&)            = delete;
    WorkGoal()                           = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@WorkGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@WorkGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@WorkGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@WorkGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@WorkGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@WorkGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
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
     * @vftbl 18
     * @symbol ?useWorkstation\@WorkGoal\@\@UEAAXXZ
     */
    virtual void useWorkstation(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORKGOAL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~WorkGoal(); // NOLINT
#endif
    /**
     * @symbol ??0WorkGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI WorkGoal(class Mob&); // NOLINT
    /**
     * @symbol ?playPOISoundEvent\@WorkGoal\@\@QEBAXXZ
     */
    MCAPI void playPOISoundEvent() const; // NOLINT

    // private:
    /**
     * @symbol ?_isInsideOrIsNotRaining\@WorkGoal\@\@AEAA_NXZ
     */
    MCAPI bool _isInsideOrIsNotRaining(); // NOLINT

private:
    /**
     * @symbol ?RAIN_CHECK_MAX_COOLDOWN\@WorkGoal\@\@0HB
     */
    MCAPI static int const RAIN_CHECK_MAX_COOLDOWN; // NOLINT
    /**
     * @symbol ?WORK_TIMESTAMP_UPDATE_INVERVAL\@WorkGoal\@\@0HB
     */
    MCAPI static int const WORK_TIMESTAMP_UPDATE_INVERVAL; // NOLINT
};
