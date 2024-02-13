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
    // vIndex: 0, symbol: __gen_??1DedicatedServerGameTestRunnerListener@@UEAA@XZ
    virtual ~DedicatedServerGameTestRunnerListener() = default;

    // vIndex: 1, symbol:
    // ?onTestStructureLoaded@GameTestBatchRunnerGameTestListener@gametest@@UEAAXAEAVBaseGameTestInstance@2@@Z
    virtual void onTestStructureLoaded(class gametest::BaseGameTestInstance&);

    // vIndex: 2, symbol:
    // ?onTestPassed@DedicatedServerGameTestRunnerListener@@UEAAXAEAVBaseGameTestInstance@gametest@@@Z
    virtual void onTestPassed(class gametest::BaseGameTestInstance&);

    // vIndex: 3, symbol:
    // ?onTestFailed@DedicatedServerGameTestRunnerListener@@UEAAXAEAVBaseGameTestInstance@gametest@@@Z
    virtual void onTestFailed(class gametest::BaseGameTestInstance&);

    // vIndex: 4, symbol:
    // ?onTestStarted@DedicatedServerGameTestRunnerListener@@UEAAXAEAVBaseGameTestInstance@gametest@@@Z
    virtual void onTestStarted(class gametest::BaseGameTestInstance&);

    // vIndex: 5, symbol: ?onTestRetryStarted@IGameTestListener@gametest@@UEAAXAEAVBaseGameTestInstance@2@@Z
    virtual void onTestRetryStarted(class gametest::BaseGameTestInstance&);

    // vIndex: 6, symbol: ?onTestRetryFinished@IGameTestListener@gametest@@UEAAXAEAVBaseGameTestInstance@2@@Z
    virtual void onTestRetryFinished(class gametest::BaseGameTestInstance&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_addTestResult@DedicatedServerGameTestRunnerListener@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0V?$optional@UGameTestError@gametest@@@3@@Z
    MCAPI void
    _addTestResult(std::string const&, std::string const& result, std::optional<struct gametest::GameTestError> error);

    // symbol:
    // ?_getTestNameWithRotation@DedicatedServerGameTestRunnerListener@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVBaseGameTestInstance@gametest@@@Z
    MCAPI static std::string _getTestNameWithRotation(class gametest::BaseGameTestInstance&);

    // NOLINTEND
};
