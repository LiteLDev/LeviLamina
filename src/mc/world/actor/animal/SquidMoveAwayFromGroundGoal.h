#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class SquidMoveAwayFromGroundGoal : public ::Goal {
public:
    // prevent constructor by default
    SquidMoveAwayFromGroundGoal& operator=(SquidMoveAwayFromGroundGoal const&);
    SquidMoveAwayFromGroundGoal(SquidMoveAwayFromGroundGoal const&);
    SquidMoveAwayFromGroundGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SquidMoveAwayFromGroundGoal@@UEAA@XZ
    virtual ~SquidMoveAwayFromGroundGoal() = default;

    // vIndex: 1, symbol: ?canUse@SquidMoveAwayFromGroundGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@SquidMoveAwayFromGroundGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@SquidMoveAwayFromGroundGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@SquidMoveAwayFromGroundGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@SquidMoveAwayFromGroundGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@SquidMoveAwayFromGroundGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // NOLINTEND
};
