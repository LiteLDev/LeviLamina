#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class TradeWithPlayerGoal : public ::Goal {
public:
    // prevent constructor by default
    TradeWithPlayerGoal& operator=(TradeWithPlayerGoal const&);
    TradeWithPlayerGoal(TradeWithPlayerGoal const&);
    TradeWithPlayerGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TradeWithPlayerGoal@@UEAA@XZ
    virtual ~TradeWithPlayerGoal() = default;

    // vIndex: 1, symbol: ?canUse@TradeWithPlayerGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@TradeWithPlayerGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@TradeWithPlayerGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@TradeWithPlayerGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // NOLINTEND
};
