#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/IGameTestListener.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class IGameTestListener; }
// clang-format on

namespace gametest {

class GameTestBatchRunnerGameTestListener : public ::gametest::IGameTestListener {
public:
    // prevent constructor by default
    GameTestBatchRunnerGameTestListener& operator=(GameTestBatchRunnerGameTestListener const&);
    GameTestBatchRunnerGameTestListener(GameTestBatchRunnerGameTestListener const&);
    GameTestBatchRunnerGameTestListener();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GameTestBatchRunnerGameTestListener@gametest@@UEAA@XZ
    virtual ~GameTestBatchRunnerGameTestListener() = default;

    // vIndex: 1, symbol:
    // ?onTestStructureLoaded@GameTestBatchRunnerGameTestListener@gametest@@UEAAXAEAVBaseGameTestInstance@2@@Z
    virtual void onTestStructureLoaded(class gametest::BaseGameTestInstance&);

    // vIndex: 2, symbol: ?onTestPassed@GameTestBatchRunnerGameTestListener@gametest@@UEAAXAEAVBaseGameTestInstance@2@@Z
    virtual void onTestPassed(class gametest::BaseGameTestInstance&);

    // vIndex: 3, symbol: ?onTestFailed@GameTestBatchRunnerGameTestListener@gametest@@UEAAXAEAVBaseGameTestInstance@2@@Z
    virtual void onTestFailed(class gametest::BaseGameTestInstance&);

    // vIndex: 4, symbol: ?onTestStarted@IGameTestListener@gametest@@UEAAXAEAVBaseGameTestInstance@2@@Z
    virtual void onTestStarted(class gametest::BaseGameTestInstance&);

    // vIndex: 5, symbol: ?onTestRetryStarted@IGameTestListener@gametest@@UEAAXAEAVBaseGameTestInstance@2@@Z
    virtual void onTestRetryStarted(class gametest::BaseGameTestInstance&);

    // vIndex: 6, symbol:
    // ?onTestRetryFinished@GameTestBatchRunnerGameTestListener@gametest@@UEAAXAEAVBaseGameTestInstance@2@@Z
    virtual void onTestRetryFinished(class gametest::BaseGameTestInstance&);

    // NOLINTEND
};

}; // namespace gametest
