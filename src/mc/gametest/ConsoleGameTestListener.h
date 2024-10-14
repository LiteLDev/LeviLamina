#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/IGameTestListener.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class IGameTestListener; }
// clang-format on

class ConsoleGameTestListener : public ::gametest::IGameTestListener {
public:
    // prevent constructor by default
    ConsoleGameTestListener& operator=(ConsoleGameTestListener const&);
    ConsoleGameTestListener(ConsoleGameTestListener const&);
    ConsoleGameTestListener();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ConsoleGameTestListener() = default;

    // vIndex: 1
    virtual void onTestStructureLoaded(class gametest::BaseGameTestInstance& test);

    // vIndex: 2
    virtual void onTestPassed(class gametest::BaseGameTestInstance& test);

    // vIndex: 3
    virtual void onTestFailed(class gametest::BaseGameTestInstance& test);

    // vIndex: 4
    virtual void onTestStarted(class gametest::BaseGameTestInstance&);

    // vIndex: 5
    virtual void onTestRetryStarted(class gametest::BaseGameTestInstance&);

    // vIndex: 6
    virtual void onTestRetryFinished(class gametest::BaseGameTestInstance&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void onTestFailed$(class gametest::BaseGameTestInstance& test);

    MCAPI void onTestPassed$(class gametest::BaseGameTestInstance& test);

    MCAPI void onTestRetryFinished$(class gametest::BaseGameTestInstance&);

    MCAPI void onTestRetryStarted$(class gametest::BaseGameTestInstance&);

    MCAPI void onTestStarted$(class gametest::BaseGameTestInstance&);

    MCAPI void onTestStructureLoaded$(class gametest::BaseGameTestInstance& test);

    // NOLINTEND
};
