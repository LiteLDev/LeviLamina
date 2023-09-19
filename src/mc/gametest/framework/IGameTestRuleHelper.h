#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace gametest {

class IGameTestRuleHelper {
public:
    // prevent constructor by default
    IGameTestRuleHelper& operator=(IGameTestRuleHelper const&);
    IGameTestRuleHelper(IGameTestRuleHelper const&);
    IGameTestRuleHelper();
};

}; // namespace gametest
