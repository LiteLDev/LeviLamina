#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestInstance; }
namespace gametest { struct GameTestError; }
// clang-format on

class DedicatedServerGameTestRunnerListener {

public:
    // prevent constructor by default
    DedicatedServerGameTestRunnerListener& operator=(DedicatedServerGameTestRunnerListener const&) = delete;
    DedicatedServerGameTestRunnerListener(DedicatedServerGameTestRunnerListener const&)            = delete;
    DedicatedServerGameTestRunnerListener()                                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?onTestPassed\@DedicatedServerGameTestRunnerListener\@\@UEAAXAEAVBaseGameTestInstance\@gametest\@\@\@Z
     */
    virtual void onTestPassed(class gametest::BaseGameTestInstance&);
    /**
     * @vftbl 3
     * @symbol ?onTestFailed\@DedicatedServerGameTestRunnerListener\@\@UEAAXAEAVBaseGameTestInstance\@gametest\@\@\@Z
     */
    virtual void onTestFailed(class gametest::BaseGameTestInstance&);
    /**
     * @vftbl 4
     * @symbol ?onTestStarted\@DedicatedServerGameTestRunnerListener\@\@UEAAXAEAVBaseGameTestInstance\@gametest\@\@\@Z
     */
    virtual void onTestStarted(class gametest::BaseGameTestInstance&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_addTestResult\@DedicatedServerGameTestRunnerListener\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0V?$optional\@UGameTestError\@gametest\@\@\@3\@\@Z
     */
    MCAPI void _addTestResult(std::string const&, std::string const&, std::optional<struct gametest::GameTestError>);
    /**
     * @symbol
     * ?_getTestNameWithRotation\@DedicatedServerGameTestRunnerListener\@\@CA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVBaseGameTestInstance\@gametest\@\@\@Z
     */
    MCAPI static std::string _getTestNameWithRotation(class gametest::BaseGameTestInstance&);
    // NOLINTEND
};
