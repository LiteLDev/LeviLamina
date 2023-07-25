#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestInstance; }
// clang-format on

namespace gametest {

class IGameTestListener {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMETEST_IGAMETESTLISTENER
public:
    IGameTestListener& operator=(IGameTestListener const&) = delete;
    IGameTestListener(IGameTestListener const&)            = delete;
    IGameTestListener()                                    = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GAMETEST_IGAMETESTLISTENER
    /**
     * @symbol ?onTestFailed\@IGameTestListener\@gametest\@\@UEAAXAEAVBaseGameTestInstance\@2\@\@Z
     */
    MCVAPI void onTestFailed(class gametest::BaseGameTestInstance&);
    /**
     * @symbol ?onTestPassed\@IGameTestListener\@gametest\@\@UEAAXAEAVBaseGameTestInstance\@2\@\@Z
     */
    MCVAPI void onTestPassed(class gametest::BaseGameTestInstance&);
    /**
     * @symbol ?onTestRetryFinished\@IGameTestListener\@gametest\@\@UEAAXAEAVBaseGameTestInstance\@2\@\@Z
     */
    MCVAPI void onTestRetryFinished(class gametest::BaseGameTestInstance&);
    /**
     * @symbol ?onTestRetryStarted\@IGameTestListener\@gametest\@\@UEAAXAEAVBaseGameTestInstance\@2\@\@Z
     */
    MCVAPI void onTestRetryStarted(class gametest::BaseGameTestInstance&);
    /**
     * @symbol ?onTestStarted\@IGameTestListener\@gametest\@\@UEAAXAEAVBaseGameTestInstance\@2\@\@Z
     */
    MCVAPI void onTestStarted(class gametest::BaseGameTestInstance&);
    /**
     * @symbol ?onTestStructureLoaded\@IGameTestListener\@gametest\@\@UEAAXAEAVBaseGameTestInstance\@2\@\@Z
     */
    MCVAPI void onTestStructureLoaded(class gametest::BaseGameTestInstance&);
#endif
};

}; // namespace gametest
