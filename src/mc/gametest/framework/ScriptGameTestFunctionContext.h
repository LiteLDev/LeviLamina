#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/WeakTypedObjectHandle.h"
#include "mc/gametest/framework/IGameTestFunctionContext.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleGameTest { class ScriptGameTestHelper; }
namespace Scripting { class WeakLifetimeScope; }
namespace gametest { class BaseGameTestHelper; }
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
    // vIndex: 0, symbol: __gen_??1ScriptGameTestFunctionContext@ScriptModuleGameTest@@UEAA@XZ
    virtual ~ScriptGameTestFunctionContext() = default;

    // symbol:
    // ??0ScriptGameTestFunctionContext@ScriptModuleGameTest@@QEAA@VWeakLifetimeScope@Scripting@@AEAVBaseGameTestHelper@gametest@@@Z
    MCAPI
    ScriptGameTestFunctionContext(class Scripting::WeakLifetimeScope scope, class gametest::BaseGameTestHelper& helper);

    // symbol:
    // ?getScriptGameTestHelper@ScriptGameTestFunctionContext@ScriptModuleGameTest@@QEAA?AV?$WeakTypedObjectHandle@VScriptGameTestHelper@ScriptModuleGameTest@@@Scripting@@XZ
    MCAPI class Scripting::WeakTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestHelper>
    getScriptGameTestHelper();

    // NOLINTEND
};

}; // namespace ScriptModuleGameTest
