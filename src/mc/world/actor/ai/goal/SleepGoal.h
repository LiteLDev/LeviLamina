#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/POIType.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/MoveToPOIGoal.h"

class SleepGoal : public ::MoveToPOIGoal {
public:
    // prevent constructor by default
    SleepGoal& operator=(SleepGoal const&);
    SleepGoal(SleepGoal const&);
    SleepGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SleepGoal@@UEAA@XZ
    virtual ~SleepGoal() = default;

    // vIndex: 1, symbol: ?canUse@SleepGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@SleepGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@SleepGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@SleepGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@SleepGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@SleepGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 16, symbol: ?_getRepathTime@SleepGoal@@EEBA_KXZ
    virtual uint64 _getRepathTime() const;

    // symbol: ??0SleepGoal@@QEAA@AEAVMob@@MMM_NMHM@Z
    MCAPI SleepGoal(
        class Mob& mob,
        float      walkSpeed,
        float      sleepColliderHeight,
        float      sleepColliderWidth,
        bool,
        float sleepYOffset,
        int   cooldown,
        float cooldownTimeout
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_lockPosToBedPos@SleepGoal@@AEAAXXZ
    MCAPI void _lockPosToBedPos();

    // symbol: ?_wakeUp@SleepGoal@@AEAAXXZ
    MCAPI void _wakeUp();

    // NOLINTEND
};
