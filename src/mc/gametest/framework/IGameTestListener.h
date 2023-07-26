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
    IGameTestListener& operator=(IGameTestListener const&) = delete;
    IGameTestListener(IGameTestListener const&)            = delete;
    IGameTestListener()                                    = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GAMETEST_IGAMETESTLISTENER
    /**
     * @symbol ?onTestFailed\@IGameTestListener\@gametest\@\@UEAAXAEAVBaseGameTestInstance\@2\@\@Z
     */
    MCVAPI void onTestFailed(class gametest::BaseGameTestInstance&); // NOLINT
    /**
     * @symbol ?onTestPassed\@IGameTestListener\@gametest\@\@UEAAXAEAVBaseGameTestInstance\@2\@\@Z
     */
    MCVAPI void onTestPassed(class gametest::BaseGameTestInstance&); // NOLINT
    /**
     * @symbol ?onTestRetryFinished\@IGameTestListener\@gametest\@\@UEAAXAEAVBaseGameTestInstance\@2\@\@Z
     */
    MCVAPI void onTestRetryFinished(class gametest::BaseGameTestInstance&); // NOLINT
    /**
     * @symbol ?onTestRetryStarted\@IGameTestListener\@gametest\@\@UEAAXAEAVBaseGameTestInstance\@2\@\@Z
     */
    MCVAPI void onTestRetryStarted(class gametest::BaseGameTestInstance&); // NOLINT
    /**
     * @symbol ?onTestStarted\@IGameTestListener\@gametest\@\@UEAAXAEAVBaseGameTestInstance\@2\@\@Z
     */
    MCVAPI void onTestStarted(class gametest::BaseGameTestInstance&); // NOLINT
    /**
     * @symbol ?onTestStructureLoaded\@IGameTestListener\@gametest\@\@UEAAXAEAVBaseGameTestInstance\@2\@\@Z
     */
    MCVAPI void onTestStructureLoaded(class gametest::BaseGameTestInstance&); // NOLINT
#endif
};

}; // namespace gametest
