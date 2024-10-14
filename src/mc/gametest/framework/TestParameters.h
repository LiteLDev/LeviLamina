#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace gametest {

struct TestParameters {
public:
    // prevent constructor by default
    TestParameters& operator=(TestParameters const&);
    TestParameters(TestParameters const&);
    TestParameters();

public:
    // NOLINTBEGIN
    MCAPI ~TestParameters();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace gametest
