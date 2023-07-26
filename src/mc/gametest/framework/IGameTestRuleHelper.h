#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace gametest {

class IGameTestRuleHelper {

public:
    // prevent constructor by default
    IGameTestRuleHelper& operator=(IGameTestRuleHelper const&) = delete;
    IGameTestRuleHelper(IGameTestRuleHelper const&)            = delete;
    IGameTestRuleHelper()                                      = delete;
};

}; // namespace gametest
