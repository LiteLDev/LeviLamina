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
    // vIndex: 0
    virtual ~ScriptAsyncGameTestFunctionRunResult() = default;

    // vIndex: 1
    virtual bool isComplete() const;

    // vIndex: 2
    virtual std::optional<struct gametest::GameTestError> getError();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI std::optional<struct gametest::GameTestError> getError$();

    MCAPI bool isComplete$() const;

    // NOLINTEND
};

}; // namespace ScriptModuleGameTest
