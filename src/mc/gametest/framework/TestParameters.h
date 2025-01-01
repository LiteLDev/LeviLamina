#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace gametest { class BaseGameTestFunction; }
// clang-format on

namespace gametest {

struct TestParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mTestPos;
    ::ll::TypedStorage<1, 1, bool>        mStopOnFailure;
    ::ll::TypedStorage<1, 1, bool>        mStopOtherTestsOnFailure;
    ::ll::TypedStorage<4, 4, int>         mRepeatCount;
    ::ll::TypedStorage<4, 4, int>         mTestsPerRow;
    ::ll::TypedStorage<4, 4, int>         mMaxTestsPerBatch;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::gametest::BaseGameTestFunction>>> mtestFunctions;
    ::ll::TypedStorage<1, 1, ::Rotation>                                                          mRotation;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~TestParameters();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace gametest
