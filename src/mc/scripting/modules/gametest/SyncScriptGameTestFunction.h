#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/external/scripting/script_engine/Closure.h"
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

class SyncScriptGameTestFunction : public ::ScriptModuleGameTest::BaseScriptGameTestFunction {
public:
    // prevent constructor by default
    SyncScriptGameTestFunction& operator=(SyncScriptGameTestFunction const&);
    SyncScriptGameTestFunction(SyncScriptGameTestFunction const&);
    SyncScriptGameTestFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SyncScriptGameTestFunction() = default;

    // vIndex: 2
    virtual std::unique_ptr<class gametest::IGameTestFunctionRunResult>
    run(class gametest::BaseGameTestHelper&, class gametest::IGameTestFunctionContext& fnContext) const;

    MCAPI SyncScriptGameTestFunction(
        class Scripting::WeakLifetimeScope scope,
        class Scripting::Closure<
            void(struct Scripting::TypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestHelper>)> functionHandle,
        std::string const&                                                                               testName
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI std::unique_ptr<class gametest::IGameTestFunctionRunResult>
          run$(class gametest::BaseGameTestHelper&, class gametest::IGameTestFunctionContext& fnContext) const;

    // NOLINTEND
};

}; // namespace ScriptModuleGameTest
