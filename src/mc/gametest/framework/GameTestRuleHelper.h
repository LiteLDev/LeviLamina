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
    // vIndex: 0, symbol: ??1GameTestRuleHelper@@@UEAA@XZ
    virtual ~GameTestRuleHelper();

    // vIndex: 1, symbol: ?addRuleToClear@GameTestRuleHelper@gametest@@UEAAXH@Z
    virtual void addRuleToClear(int);

    // vIndex: 2, symbol: ?clearRules@GameTestRuleHelper@gametest@@UEAAXXZ
    virtual void clearRules();

    // vIndex: 3, symbol: ?restoreRules@GameTestRuleHelper@gametest@@UEAAXXZ
    virtual void restoreRules();

    // NOLINTEND
};

}; // namespace gametest
