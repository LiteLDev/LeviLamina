#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { struct GameTestError; }
// clang-format on

namespace ScriptModuleGameTest {

class ScriptAsyncGameTestFunctionRunResult {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEGAMETEST_SCRIPTASYNCGAMETESTFUNCTIONRUNRESULT
public:
    ScriptAsyncGameTestFunctionRunResult& operator=(ScriptAsyncGameTestFunctionRunResult const&) = delete;
    ScriptAsyncGameTestFunctionRunResult(ScriptAsyncGameTestFunctionRunResult const&)            = delete;
    ScriptAsyncGameTestFunctionRunResult()                                                       = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isComplete\@ScriptAsyncGameTestFunctionRunResult\@ScriptModuleGameTest\@\@UEBA_NXZ
     */
    virtual bool isComplete() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getError\@ScriptAsyncGameTestFunctionRunResult\@ScriptModuleGameTest\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@XZ
     */
    virtual class std::optional<struct gametest::GameTestError> getError();
};

}; // namespace ScriptModuleGameTest
