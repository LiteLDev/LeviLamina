#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { struct GameTestError; }
// clang-format on

namespace gametest {

class SyncGameTestFunctionRunResult {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMETEST_SYNCGAMETESTFUNCTIONRUNRESULT
public:
    SyncGameTestFunctionRunResult& operator=(SyncGameTestFunctionRunResult const&) = delete;
    SyncGameTestFunctionRunResult(SyncGameTestFunctionRunResult const&)            = delete;
    SyncGameTestFunctionRunResult()                                                = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isComplete\@SyncGameTestFunctionRunResult\@gametest\@\@UEBA_NXZ
     */
    virtual bool isComplete() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getError\@SyncGameTestFunctionRunResult\@gametest\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@XZ
     */
    virtual class std::optional<struct gametest::GameTestError> getError();
};

}; // namespace gametest
