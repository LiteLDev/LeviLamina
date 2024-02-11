#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/IGameTestRuleHelper.h"

// auto generated forward declare list
// clang-format off
class ILevel;
namespace gametest { class IGameTestRuleHelper; }
// clang-format on

namespace gametest {

class GameTestRuleHelper : public ::gametest::IGameTestRuleHelper {
public:
    // prevent constructor by default
    GameTestRuleHelper& operator=(GameTestRuleHelper const&);
    GameTestRuleHelper(GameTestRuleHelper const&);
    GameTestRuleHelper();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GameTestRuleHelper@gametest@@UEAA@XZ
    virtual ~GameTestRuleHelper() = default;

    // vIndex: 1, symbol: ?addRuleToClear@GameTestRuleHelper@gametest@@UEAAXH@Z
    virtual void addRuleToClear(int);

    // vIndex: 2, symbol: ?clearRules@GameTestRuleHelper@gametest@@UEAAXXZ
    virtual void clearRules();

    // vIndex: 3, symbol: ?restoreRules@GameTestRuleHelper@gametest@@UEAAXXZ
    virtual void restoreRules();

    // symbol: ??0GameTestRuleHelper@gametest@@QEAA@AEAVILevel@@@Z
    MCAPI explicit GameTestRuleHelper(class ILevel& level);

    // NOLINTEND
};

}; // namespace gametest
