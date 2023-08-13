#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/MoveToPOIGoal.h"

class WorkGoal : public ::MoveToPOIGoal {

public:
    // prevent constructor by default
    WorkGoal& operator=(WorkGoal const&) = delete;
    WorkGoal(WorkGoal const&)            = delete;
    WorkGoal()                           = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@WorkGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@WorkGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 4
     * @symbol ?start\@WorkGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@WorkGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@WorkGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@WorkGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @vftbl 18
     * @symbol ?useWorkstation\@WorkGoal\@\@UEAAXXZ
     */
    virtual void useWorkstation();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORKGOAL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~WorkGoal();
#endif
    /**
     * @symbol ??0WorkGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI WorkGoal(class Mob&);
    /**
     * @symbol ?playPOISoundEvent\@WorkGoal\@\@QEBAXXZ
     */
    MCAPI void playPOISoundEvent() const;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_isInsideOrIsNotRaining\@WorkGoal\@\@AEAA_NXZ
     */
    MCAPI bool _isInsideOrIsNotRaining();
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol ?RAIN_CHECK_MAX_COOLDOWN\@WorkGoal\@\@0HB
     */
    MCAPI static int const RAIN_CHECK_MAX_COOLDOWN;
    /**
     * @symbol ?WORK_TIMESTAMP_UPDATE_INVERVAL\@WorkGoal\@\@0HB
     */
    MCAPI static int const WORK_TIMESTAMP_UPDATE_INVERVAL;
    // NOLINTEND
};
