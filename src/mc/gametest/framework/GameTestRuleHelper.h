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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?addRuleToClear@GameTestRuleHelper@gametest@@UEAAXH@Z
    virtual void addRuleToClear(int);

    // vIndex: 2, symbol: ?clearRules@GameTestRuleHelper@gametest@@UEAAXXZ
    virtual void clearRules();

    // vIndex: 3, symbol: ?restoreRules@GameTestRuleHelper@gametest@@UEAAXXZ
    virtual void restoreRules();

    // NOLINTEND
};

}; // namespace gametest
