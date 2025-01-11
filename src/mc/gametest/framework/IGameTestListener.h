#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestInstance; }
// clang-format on

namespace gametest {

class IGameTestListener {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IGameTestListener() = default;

    // vIndex: 1
    virtual void onTestStructureLoaded(::gametest::BaseGameTestInstance&);

    // vIndex: 2
    virtual void onTestPassed(::gametest::BaseGameTestInstance&);

    // vIndex: 3
    virtual void onTestFailed(::gametest::BaseGameTestInstance&);

    // vIndex: 4
    virtual void onTestStarted(::gametest::BaseGameTestInstance&);

    // vIndex: 5
    virtual void onTestRetryStarted(::gametest::BaseGameTestInstance&);

    // vIndex: 6
    virtual void onTestRetryFinished(::gametest::BaseGameTestInstance&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onTestStructureLoaded(::gametest::BaseGameTestInstance&);

    MCFOLD void $onTestPassed(::gametest::BaseGameTestInstance&);

    MCFOLD void $onTestFailed(::gametest::BaseGameTestInstance&);

    MCFOLD void $onTestStarted(::gametest::BaseGameTestInstance&);

    MCFOLD void $onTestRetryStarted(::gametest::BaseGameTestInstance&);

    MCFOLD void $onTestRetryFinished(::gametest::BaseGameTestInstance&);
    // NOLINTEND
};

} // namespace gametest
