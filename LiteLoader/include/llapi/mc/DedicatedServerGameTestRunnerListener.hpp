/**
 * @file  DedicatedServerGameTestRunnerListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DedicatedServerGameTestRunnerListener.
 *
 */
class DedicatedServerGameTestRunnerListener {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEDICATEDSERVERGAMETESTRUNNERLISTENER
public:
    class DedicatedServerGameTestRunnerListener& operator=(class DedicatedServerGameTestRunnerListener const &) = delete;
    DedicatedServerGameTestRunnerListener(class DedicatedServerGameTestRunnerListener const &) = delete;
    DedicatedServerGameTestRunnerListener() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DedicatedServerGameTestRunnerListener();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @hash   1469330688
     * @vftbl  2
     * @symbol  ?onTestPassed\@DedicatedServerGameTestRunnerListener\@\@UEAAXAEAVBaseGameTestInstance\@gametest\@\@\@Z
     */
    virtual void onTestPassed(class gametest::BaseGameTestInstance &);
    /**
     * @hash   -92871613
     * @vftbl  3
     * @symbol  ?onTestFailed\@DedicatedServerGameTestRunnerListener\@\@UEAAXAEAVBaseGameTestInstance\@gametest\@\@\@Z
     */
    virtual void onTestFailed(class gametest::BaseGameTestInstance &);
    /**
     * @hash   1002958161
     * @vftbl  4
     * @symbol  ?onTestStarted\@DedicatedServerGameTestRunnerListener\@\@UEAAXAEAVBaseGameTestInstance\@gametest\@\@\@Z
     */
    virtual void onTestStarted(class gametest::BaseGameTestInstance &);

//private:
    /**
     * @hash   1015584752
     * @symbol  ?_addTestResult\@DedicatedServerGameTestRunnerListener\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0V?$optional\@UGameTestError\@gametest\@\@\@3\@\@Z
     */
    MCAPI void _addTestResult(std::string const &, std::string const &, class std::optional<struct gametest::GameTestError>);
    /**
     * @hash   2087522952
     * @symbol  ?_getTestNameWithRotation\@DedicatedServerGameTestRunnerListener\@\@CA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVBaseGameTestInstance\@gametest\@\@\@Z
     */
    MCAPI static std::string _getTestNameWithRotation(class gametest::BaseGameTestInstance &);

private:

};