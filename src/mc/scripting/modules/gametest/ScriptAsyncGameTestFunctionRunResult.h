#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/deps/scripting/script_engine/Future.h"
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

    virtual ~ScriptAsyncGameTestFunctionRunResult() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isComplete() const;

    MCAPI ::std::optional<::gametest::GameTestError> $getError();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
