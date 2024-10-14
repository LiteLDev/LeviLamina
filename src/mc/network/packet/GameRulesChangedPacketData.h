#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/storage/GameRule.h"

class GameRulesChangedPacketData {
public:
    std::vector<class GameRule> mRules; // this+0x0
public:
    // NOLINTBEGIN
    MCAPI void addRule(class GameRule const& rule);

    MCAPI std::vector<class GameRule> const& getRules() const;

    MCAPI void setRules(std::vector<class GameRule> rules);

    MCAPI ~GameRulesChangedPacketData();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
