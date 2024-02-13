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
    // vIndex: 0, symbol: __gen_??1ConsoleGameTestListener@@UEAA@XZ
    virtual ~ConsoleGameTestListener() = default;

    // vIndex: 1, symbol: ?onTestStructureLoaded@ConsoleGameTestListener@@UEAAXAEAVBaseGameTestInstance@gametest@@@Z
    virtual void onTestStructureLoaded(class gametest::BaseGameTestInstance& test);

    // vIndex: 2, symbol: ?onTestPassed@ConsoleGameTestListener@@UEAAXAEAVBaseGameTestInstance@gametest@@@Z
    virtual void onTestPassed(class gametest::BaseGameTestInstance& test);

    // vIndex: 3, symbol: ?onTestFailed@ConsoleGameTestListener@@UEAAXAEAVBaseGameTestInstance@gametest@@@Z
    virtual void onTestFailed(class gametest::BaseGameTestInstance& test);

    // vIndex: 4, symbol: ?onTestStarted@IGameTestListener@gametest@@UEAAXAEAVBaseGameTestInstance@2@@Z
    virtual void onTestStarted(class gametest::BaseGameTestInstance&);

    // vIndex: 5, symbol: ?onTestRetryStarted@IGameTestListener@gametest@@UEAAXAEAVBaseGameTestInstance@2@@Z
    virtual void onTestRetryStarted(class gametest::BaseGameTestInstance&);

    // vIndex: 6, symbol: ?onTestRetryFinished@IGameTestListener@gametest@@UEAAXAEAVBaseGameTestInstance@2@@Z
    virtual void onTestRetryFinished(class gametest::BaseGameTestInstance&);

    // NOLINTEND
};
