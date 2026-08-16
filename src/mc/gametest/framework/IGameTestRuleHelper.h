#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace gametest {

class IGameTestRuleHelper {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IGameTestRuleHelper();

    virtual void addRuleToClear(int ruleID) = 0;

    virtual void clearRules() = 0;

    virtual void restoreRules() = 0;
    // NOLINTEND
};

} // namespace gametest
