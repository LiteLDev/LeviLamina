#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/IGameTestListener.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class IGameTestListener; }
namespace gametest { struct GameTestError; }
// clang-format on

class DedicatedServerGameTestRunnerListener : public ::gametest::IGameTestListener {
public:
    // prevent constructor by default
    DedicatedServerGameTestRunnerListener& operator=(DedicatedServerGameTestRunnerListener const&);
    DedicatedServerGameTestRunnerListener(DedicatedServerGameTestRunnerListener const&);
    DedicatedServerGameTestRunnerListener();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DedicatedServerGameTestRunnerListener() = default;

    // vIndex: 1
    virtual void onTestStructureLoaded(class gametest::BaseGameTestInstance&);

    // vIndex: 2
    virtual void onTestPassed(class gametest::BaseGameTestInstance& testInstance);

    // vIndex: 3
    virtual void onTestFailed(class gametest::BaseGameTestInstance& testInstance);

    // vIndex: 4
    virtual void onTestStarted(class gametest::BaseGameTestInstance& testInstance);

    // vIndex: 5
    virtual void onTestRetryStarted(class gametest::BaseGameTestInstance&);

    // vIndex: 6
    virtual void onTestRetryFinished(class gametest::BaseGameTestInstance&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _addTestResult(
        std::string const&                            testName,
        std::string const&                            result,
        std::optional<struct gametest::GameTestError> error
    );

    MCAPI static std::string _getTestNameWithRotation(class gametest::BaseGameTestInstance& testInstance);

    // NOLINTEND
};
