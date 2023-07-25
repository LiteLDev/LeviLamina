#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace gametest {

class IGameTestRuleHelper {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMETEST_IGAMETESTRULEHELPER
public:
    IGameTestRuleHelper& operator=(IGameTestRuleHelper const&) = delete;
    IGameTestRuleHelper(IGameTestRuleHelper const&)            = delete;
    IGameTestRuleHelper()                                      = delete;
#endif

public:
};

}; // namespace gametest
