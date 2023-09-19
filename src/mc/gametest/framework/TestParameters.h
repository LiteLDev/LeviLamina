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
    // symbol: ??1TestParameters@gametest@@QEAA@XZ
    MCAPI ~TestParameters();

    // NOLINTEND
};

}; // namespace gametest
