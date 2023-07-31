#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace gametest {

struct TestParameters {

public:
    // prevent constructor by default
    TestParameters& operator=(TestParameters const&) = delete;
    TestParameters(TestParameters const&)            = delete;
    TestParameters()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1TestParameters\@gametest\@\@QEAA\@XZ
     */
    MCAPI ~TestParameters();
    // NOLINTEND
};

}; // namespace gametest
