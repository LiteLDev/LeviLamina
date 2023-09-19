#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/gametest/framework/BaseGameTestFunction.h"

namespace gametest {

struct TestParameters {
public:
    BlockPos                                                     mTestPos;                 // this+0x0
    bool                                                         mStopOnFailure;           // this+0xC
    bool                                                         mStopOtherTestsOnFailure; // this+0x10
    int                                                          mRepeatCount;             // this+0x14
    int                                                          mTestsPerRow;             // this+0x18
    int                                                          mMaxTestsPerBatch;        // this+0x1C
    std::vector<std::shared_ptr<gametest::BaseGameTestFunction>> mtestFunctions;           // this+0x20
    Rotation                                                     mRotation;                // this+0x38

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
