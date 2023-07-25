#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestInstance; }
// clang-format on

namespace gametest {

class GameTestBatchRunnerGameTestListener {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMETEST_GAMETESTBATCHRUNNERGAMETESTLISTENER
public:
    GameTestBatchRunnerGameTestListener& operator=(GameTestBatchRunnerGameTestListener const&) = delete;
    GameTestBatchRunnerGameTestListener(GameTestBatchRunnerGameTestListener const&)            = delete;
    GameTestBatchRunnerGameTestListener()                                                      = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?onTestStructureLoaded\@GameTestBatchRunnerGameTestListener\@gametest\@\@UEAAXAEAVBaseGameTestInstance\@2\@\@Z
     */
    virtual void onTestStructureLoaded(class gametest::BaseGameTestInstance&);
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
#endif
};

}; // namespace gametest
