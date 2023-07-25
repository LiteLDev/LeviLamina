#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace gametest {

struct TestParameters {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMETEST_TESTPARAMETERS
public:
    TestParameters& operator=(TestParameters const&) = delete;
    TestParameters(TestParameters const&)            = delete;
    TestParameters()                                 = delete;
#endif

public:
    /**
     * @symbol ??1TestParameters\@gametest\@\@QEAA\@XZ
     */
    MCAPI ~TestParameters();
};

}; // namespace gametest
