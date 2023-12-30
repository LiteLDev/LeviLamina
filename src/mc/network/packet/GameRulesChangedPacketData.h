#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/storage/GameRule.h"

class GameRulesChangedPacketData {
public:
    std::vector<class GameRule> mRules; // this+0x0
public:
    // NOLINTBEGIN
    // symbol: ?addRule@GameRulesChangedPacketData@@QEAAXAEBVGameRule@@@Z
    MCAPI void addRule(class GameRule const& rule);

    // symbol: ?getRules@GameRulesChangedPacketData@@QEBAAEBV?$vector@VGameRule@@V?$allocator@VGameRule@@@std@@@std@@XZ
    MCAPI std::vector<class GameRule> const& getRules() const;

    // symbol: ?setRules@GameRulesChangedPacketData@@QEAAXV?$vector@VGameRule@@V?$allocator@VGameRule@@@std@@@std@@@Z
    MCAPI void setRules(std::vector<class GameRule> rules);

    // symbol: ??1GameRulesChangedPacketData@@QEAA@XZ
    MCAPI ~GameRulesChangedPacketData();

    // NOLINTEND
};
