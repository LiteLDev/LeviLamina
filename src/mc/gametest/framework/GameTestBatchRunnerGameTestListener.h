#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/IGameTestListener.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestInstance; }
// clang-format on

namespace gametest {

class GameTestBatchRunnerGameTestListener : public ::gametest::IGameTestListener {

public:
    // prevent constructor by default
    GameTestBatchRunnerGameTestListener& operator=(GameTestBatchRunnerGameTestListener const&) = delete;
    GameTestBatchRunnerGameTestListener(GameTestBatchRunnerGameTestListener const&)            = delete;
    GameTestBatchRunnerGameTestListener()                                                      = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GAMETEST_GAMETESTBATCHRUNNERGAMETESTLISTENER
    /**
     * @symbol ?onTestFailed\@GameTestBatchRunnerGameTestListener\@gametest\@\@UEAAXAEAVBaseGameTestInstance\@2\@\@Z
     */
    MCVAPI void onTestFailed(class gametest::BaseGameTestInstance&);
    /**
     * @symbol ?onTestPassed\@GameTestBatchRunnerGameTestListener\@gametest\@\@UEAAXAEAVBaseGameTestInstance\@2\@\@Z
     */
    MCVAPI void onTestPassed(class gametest::BaseGameTestInstance&);
    /**
     * @symbol
     * ?onTestRetryFinished\@GameTestBatchRunnerGameTestListener\@gametest\@\@UEAAXAEAVBaseGameTestInstance\@2\@\@Z
     */
    MCVAPI void onTestRetryFinished(class gametest::BaseGameTestInstance&);
    /**
     * @symbol
     * ?onTestStructureLoaded\@GameTestBatchRunnerGameTestListener\@gametest\@\@UEAAXAEAVBaseGameTestInstance\@2\@\@Z
     */
    MCVAPI void onTestStructureLoaded(class gametest::BaseGameTestInstance&);
#endif
    // NOLINTEND
};

}; // namespace gametest
