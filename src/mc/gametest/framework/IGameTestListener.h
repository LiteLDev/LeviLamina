#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestInstance; }
// clang-format on

namespace gametest {

class IGameTestListener {
public:
    // prevent constructor by default
    IGameTestListener& operator=(IGameTestListener const&);
    IGameTestListener(IGameTestListener const&);
    IGameTestListener();

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
    MCAPI void $onTestStructureLoaded(::gametest::BaseGameTestInstance&);

    MCAPI void $onTestPassed(::gametest::BaseGameTestInstance&);

    MCAPI void $onTestFailed(::gametest::BaseGameTestInstance&);

    MCAPI void $onTestStarted(::gametest::BaseGameTestInstance&);

    MCAPI void $onTestRetryStarted(::gametest::BaseGameTestInstance&);

    MCAPI void $onTestRetryFinished(::gametest::BaseGameTestInstance&);
    // NOLINTEND
};

} // namespace gametest
