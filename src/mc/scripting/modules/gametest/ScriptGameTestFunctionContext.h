#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/IGameTestFunctionContext.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class IGameTestFunctionContext; }
// clang-format on

namespace ScriptModuleGameTest {

class ScriptGameTestFunctionContext : public ::gametest::IGameTestFunctionContext {
public:
    // prevent constructor by default
    ScriptGameTestFunctionContext& operator=(ScriptGameTestFunctionContext const&);
    ScriptGameTestFunctionContext(ScriptGameTestFunctionContext const&);
    ScriptGameTestFunctionContext();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptGameTestFunctionContext() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};

}; // namespace ScriptModuleGameTest
