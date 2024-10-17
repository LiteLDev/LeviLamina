#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace gametest {

class GameTestRuleHelper {
public:
    // prevent constructor by default
    GameTestRuleHelper& operator=(GameTestRuleHelper const&);
    GameTestRuleHelper(GameTestRuleHelper const&);
    GameTestRuleHelper();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GameTestRuleHelper() = default;

    // vIndex: 1
    virtual void addRuleToClear(int ruleID);

    // vIndex: 2
    virtual void clearRules();

    // vIndex: 3
    virtual void restoreRules();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void addRuleToClear$(int ruleID);

    MCAPI void clearRules$();

    MCAPI void restoreRules$();

    // NOLINTEND
};

}; // namespace gametest
