#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/IGameTestFunctionRunResult.h"

// auto generated forward declare list
// clang-format off
namespace gametest { struct GameTestError; }
// clang-format on

namespace ScriptModuleGameTest {

class ScriptAsyncGameTestFunctionRunResult : public ::gametest::IGameTestFunctionRunResult {

public:
    // prevent constructor by default
    ScriptAsyncGameTestFunctionRunResult& operator=(ScriptAsyncGameTestFunctionRunResult const&) = delete;
    ScriptAsyncGameTestFunctionRunResult(ScriptAsyncGameTestFunctionRunResult const&)            = delete;
    ScriptAsyncGameTestFunctionRunResult()                                                       = delete;

public:
    // NOLINTBEGIN
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
    virtual std::optional<struct gametest::GameTestError> getError();
    // NOLINTEND
};

}; // namespace ScriptModuleGameTest
