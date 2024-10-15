#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/BaseGameTestFunction.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
namespace gametest { class BaseGameTestFunction; }
namespace gametest { class BaseGameTestHelper; }
namespace gametest { class IGameTestFunctionContext; }
namespace gametest { class IGameTestFunctionRunResult; }
// clang-format on

namespace ScriptModuleGameTest {

class BaseScriptGameTestFunction : public ::gametest::BaseGameTestFunction {
public:
    // prevent constructor by default
    BaseScriptGameTestFunction& operator=(BaseScriptGameTestFunction const&);
    BaseScriptGameTestFunction(BaseScriptGameTestFunction const&);
    BaseScriptGameTestFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BaseScriptGameTestFunction() = default;

    // vIndex: 1
    virtual std::unique_ptr<class gametest::IGameTestFunctionContext>
    createContext(class gametest::BaseGameTestHelper& helper) const;

    MCAPI BaseScriptGameTestFunction(class Scripting::WeakLifetimeScope scope, std::string const& testName);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class Scripting::WeakLifetimeScope scope, std::string const& testName);

    MCAPI std::unique_ptr<class gametest::IGameTestFunctionContext>
          createContext$(class gametest::BaseGameTestHelper& helper) const;

    // NOLINTEND
};

}; // namespace ScriptModuleGameTest
