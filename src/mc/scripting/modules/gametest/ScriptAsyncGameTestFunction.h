#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/external/scripting/script_engine/Closure.h"
#include "mc/external/scripting/script_engine/Future.h"
#include "mc/scripting/modules/gametest/BaseScriptGameTestFunction.h"

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
    run(class gametest::BaseGameTestHelper&, class gametest::IGameTestFunctionContext& fnContext) const;

    MCAPI ScriptAsyncGameTestFunction(
        class Scripting::WeakLifetimeScope scope,
        class Scripting::Closure<class Scripting::Future<
            void>(struct Scripting::TypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestHelper>)>
                           functionHandle,
        std::string const& testName
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(
        class Scripting::WeakLifetimeScope scope,
        class Scripting::Closure<class Scripting::Future<
            void>(struct Scripting::TypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestHelper>)>
                           functionHandle,
        std::string const& testName
    );

    MCAPI std::unique_ptr<class gametest::IGameTestFunctionRunResult>
          run$(class gametest::BaseGameTestHelper&, class gametest::IGameTestFunctionContext& fnContext) const;

    // NOLINTEND
};

}; // namespace ScriptModuleGameTest
