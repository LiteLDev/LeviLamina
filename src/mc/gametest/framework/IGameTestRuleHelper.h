#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace gametest {

class IGameTestRuleHelper {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IGameTestRuleHelper() = default;

    virtual void addRuleToClear(int) = 0;

    virtual void clearRules() = 0;

    virtual void restoreRules() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace gametest
