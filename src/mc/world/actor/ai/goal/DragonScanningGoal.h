#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class DragonScanningGoal : public ::Goal {
public:
    // prevent constructor by default
    DragonScanningGoal& operator=(DragonScanningGoal const&);
    DragonScanningGoal(DragonScanningGoal const&);
    DragonScanningGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DragonScanningGoal@@UEAA@XZ
    virtual ~DragonScanningGoal() = default;

    // vIndex: 1, symbol: ?canUse@DragonScanningGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@DragonScanningGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@DragonScanningGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@DragonScanningGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@DragonScanningGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@DragonScanningGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0DragonScanningGoal@@QEAA@AEAVEnderDragon@@@Z
    MCAPI explicit DragonScanningGoal(class EnderDragon& mob);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?SITTING_ATTACK_VIEW_RANGE@DragonScanningGoal@@0MA
    MCAPI static float SITTING_ATTACK_VIEW_RANGE;

    // symbol: ?SITTING_CHARGE_VIEW_RANGE@DragonScanningGoal@@0MA
    MCAPI static float SITTING_CHARGE_VIEW_RANGE;

    // symbol: ?SITTING_SCANNING_IDLE_TICKS@DragonScanningGoal@@0HA
    MCAPI static int SITTING_SCANNING_IDLE_TICKS;

    // NOLINTEND
};
