#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/IGameTestFunctionRunResult.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class IGameTestFunctionRunResult; }
namespace gametest { struct GameTestError; }
// clang-format on

namespace ScriptModuleGameTest {

class ScriptAsyncGameTestFunctionRunResult : public ::gametest::IGameTestFunctionRunResult {
public:
    // prevent constructor by default
    ScriptAsyncGameTestFunctionRunResult& operator=(ScriptAsyncGameTestFunctionRunResult const&);
    ScriptAsyncGameTestFunctionRunResult(ScriptAsyncGameTestFunctionRunResult const&);
    ScriptAsyncGameTestFunctionRunResult();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptAsyncGameTestFunctionRunResult@ScriptModuleGameTest@@UEAA@XZ
    virtual ~ScriptAsyncGameTestFunctionRunResult() = default;

    // vIndex: 1, symbol: ?isComplete@ScriptAsyncGameTestFunctionRunResult@ScriptModuleGameTest@@UEBA_NXZ
    virtual bool isComplete() const;

    // vIndex: 2, symbol:
    // ?getError@ScriptAsyncGameTestFunctionRunResult@ScriptModuleGameTest@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@XZ
    virtual std::optional<struct gametest::GameTestError> getError();

    // NOLINTEND
};

}; // namespace ScriptModuleGameTest
