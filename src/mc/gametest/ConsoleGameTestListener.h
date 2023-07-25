#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestInstance; }
// clang-format on

class ConsoleGameTestListener {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONSOLEGAMETESTLISTENER
public:
    ConsoleGameTestListener& operator=(ConsoleGameTestListener const&) = delete;
    ConsoleGameTestListener(ConsoleGameTestListener const&)            = delete;
    ConsoleGameTestListener()                                          = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?onTestStructureLoaded\@ConsoleGameTestListener\@\@UEAAXAEAVBaseGameTestInstance\@gametest\@\@\@Z
     */
    virtual void onTestStructureLoaded(class gametest::BaseGameTestInstance&);
    /**
     * @vftbl 2
     * @symbol ?onTestPassed\@ConsoleGameTestListener\@\@UEAAXAEAVBaseGameTestInstance\@gametest\@\@\@Z
     */
    virtual void onTestPassed(class gametest::BaseGameTestInstance&);
    /**
     * @vftbl 3
     * @symbol ?onTestFailed\@ConsoleGameTestListener\@\@UEAAXAEAVBaseGameTestInstance\@gametest\@\@\@Z
     */
    virtual void onTestFailed(class gametest::BaseGameTestInstance&);
};
