#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/Closure.h"
#include "mc/external/scripting/Future.h"
#include "mc/external/scripting/TypedObjectHandle.h"
#include "mc/gametest/framework/BaseScriptGameTestFunction.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleGameTest { class BaseScriptGameTestFunction; }
namespace ScriptModuleGameTest { class ScriptGameTestHelper; }
namespace Scripting { class WeakLifetimeScope; }
namespace gametest { class BaseGameTestHelper; }
namespace gametest { class IGameTestFunctionContext; }
namespace gametest { class IGameTestFunctionRunResult; }
// clang-format on

namespace ScriptModuleGameTest {

class ScriptAsyncGameTestFunction : public ::ScriptModuleGameTest::BaseScriptGameTestFunction {
public:
    // prevent constructor by default
    ScriptAsyncGameTestFunction& operator=(ScriptAsyncGameTestFunction const&);
    ScriptAsyncGameTestFunction(ScriptAsyncGameTestFunction const&);
    ScriptAsyncGameTestFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptAsyncGameTestFunction() = default;

    // vIndex: 2
    virtual std::unique_ptr<class gametest::IGameTestFunctionRunResult>
    run(class gametest::BaseGameTestHelper&, class gametest::IGameTestFunctionContext&) const;

    MCAPI
    ScriptAsyncGameTestFunction(class Scripting::WeakLifetimeScope scope, class Scripting::Closure<class Scripting::Future<void>(struct Scripting::TypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestHelper>)>, std::string const&);

    // NOLINTEND
};

}; // namespace ScriptModuleGameTest
