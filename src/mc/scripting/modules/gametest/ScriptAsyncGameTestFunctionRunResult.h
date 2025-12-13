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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 216> mUnk5145ae;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAsyncGameTestFunctionRunResult& operator=(ScriptAsyncGameTestFunctionRunResult const&);
    ScriptAsyncGameTestFunctionRunResult(ScriptAsyncGameTestFunctionRunResult const&);
    ScriptAsyncGameTestFunctionRunResult();

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
    MCNAPI bool $isComplete() const;

    MCNAPI ::std::optional<::gametest::GameTestError> $getError();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
