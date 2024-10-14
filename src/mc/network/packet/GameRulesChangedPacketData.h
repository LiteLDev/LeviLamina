#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameRulesChangedPacketData {
public:
    // prevent constructor by default
    GameRulesChangedPacketData& operator=(GameRulesChangedPacketData const&);
    GameRulesChangedPacketData(GameRulesChangedPacketData const&);
    GameRulesChangedPacketData();

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
