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
    virtual void addRuleToClear(int);

    // vIndex: 2
    virtual void clearRules();

    // vIndex: 3
    virtual void restoreRules();

    // NOLINTEND
};

}; // namespace gametest
