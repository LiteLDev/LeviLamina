#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/deps/script_core/script_engine/scripting/Future.h"
#include "mc/gametest/framework/IGameTestFunctionRunResult.h"

// auto generated forward declare list
// clang-format off
namespace gametest { struct GameTestError; }
// clang-format on

namespace ScriptModuleGameTest {

class ScriptAsyncGameTestFunctionRunResult : public ::gametest::IGameTestFunctionRunResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::Scripting::Result_deprecated<::Scripting::Future<void>>> mResult;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isComplete() const /*override*/;

    virtual ::std::optional<::gametest::GameTestError> getError() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ScriptModuleGameTest
