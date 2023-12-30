#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class RollGoal : public ::Goal {
public:
    // prevent constructor by default
    RollGoal& operator=(RollGoal const&);
    RollGoal(RollGoal const&);
    RollGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RollGoal@@UEAA@XZ
    virtual ~RollGoal() = default;

    // vIndex: 1, symbol: ?canUse@RollGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@RollGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 3, symbol: ?canBeInterrupted@RollGoal@@UEAA_NXZ
    virtual bool canBeInterrupted();

    // vIndex: 4, symbol: ?start@RollGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@RollGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@RollGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@RollGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0RollGoal@@QEAA@AEAVMob@@M@Z
    MCAPI RollGoal(class Mob& mob, float probability);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_handleRoll@RollGoal@@AEBAXHAEAVVec3@@AEAM1@Z
    MCAPI void _handleRoll(int rollCounter, class Vec3& positionDelta, float& rollX, float& rollZ) const;

    // NOLINTEND
};
