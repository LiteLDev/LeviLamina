#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace gametest {

class IGameTestRuleHelper {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IGameTestRuleHelper() = default;

    // vIndex: 1
    virtual void addRuleToClear(int) = 0;

    // vIndex: 2
    virtual void clearRules() = 0;

    // vIndex: 3
    virtual void restoreRules() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace gametest
