#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class SquidFleeGoal : public ::Goal {
public:
    // prevent constructor by default
    SquidFleeGoal& operator=(SquidFleeGoal const&);
    SquidFleeGoal(SquidFleeGoal const&);
    SquidFleeGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SquidFleeGoal@@UEAA@XZ
    virtual ~SquidFleeGoal() = default;

    // vIndex: 1, symbol: ?canUse@SquidFleeGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@SquidFleeGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@SquidFleeGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@SquidFleeGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@SquidFleeGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@SquidFleeGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // NOLINTEND
};
