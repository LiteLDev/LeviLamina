#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/POIType.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/MoveToPOIGoal.h"

class WorkGoal : public ::MoveToPOIGoal {
public:
    // prevent constructor by default
    WorkGoal& operator=(WorkGoal const&);
    WorkGoal(WorkGoal const&);
    WorkGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1WorkGoal@@UEAA@XZ
    virtual ~WorkGoal();

    // vIndex: 1, symbol: ?canUse@WorkGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@WorkGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@WorkGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@WorkGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@WorkGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@WorkGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 18, symbol: ?useWorkstation@WorkGoal@@UEAAXXZ
    virtual void useWorkstation();

    // symbol: ??0WorkGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit WorkGoal(class Mob& mob);

    // symbol: ?playPOISoundEvent@WorkGoal@@QEBAXXZ
    MCAPI void playPOISoundEvent() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_isInsideOrIsNotRaining@WorkGoal@@AEAA_NXZ
    MCAPI bool _isInsideOrIsNotRaining();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?RAIN_CHECK_MAX_COOLDOWN@WorkGoal@@0HB
    MCAPI static int const RAIN_CHECK_MAX_COOLDOWN;

    // symbol: ?WORK_TIMESTAMP_UPDATE_INVERVAL@WorkGoal@@0HB
    MCAPI static int const WORK_TIMESTAMP_UPDATE_INVERVAL;

    // NOLINTEND
};
