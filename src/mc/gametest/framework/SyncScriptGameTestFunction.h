#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/Closure.h"
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

class SyncScriptGameTestFunction : public ::ScriptModuleGameTest::BaseScriptGameTestFunction {
public:
    // prevent constructor by default
    SyncScriptGameTestFunction& operator=(SyncScriptGameTestFunction const&);
    SyncScriptGameTestFunction(SyncScriptGameTestFunction const&);
    SyncScriptGameTestFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SyncScriptGameTestFunction@@@UEAA@XZ
    virtual ~SyncScriptGameTestFunction();

    // vIndex: 2, symbol:
    // ?run@SyncScriptGameTestFunction@ScriptModuleGameTest@@UEBA?AV?$unique_ptr@VIGameTestFunctionRunResult@gametest@@U?$default_delete@VIGameTestFunctionRunResult@gametest@@@std@@@std@@AEAVBaseGameTestHelper@gametest@@AEAVIGameTestFunctionContext@6@@Z
    virtual std::unique_ptr<class gametest::IGameTestFunctionRunResult>
    run(class gametest::BaseGameTestHelper&, class gametest::IGameTestFunctionContext&) const;

    // symbol:
    // ??0SyncScriptGameTestFunction@ScriptModuleGameTest@@QEAA@VWeakLifetimeScope@Scripting@@V?$Closure@$$A6AXU?$TypedObjectHandle@VScriptGameTestHelper@ScriptModuleGameTest@@@Scripting@@@Z$$V@3@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI
    SyncScriptGameTestFunction(class Scripting::WeakLifetimeScope, class Scripting::Closure<void(struct Scripting::TypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestHelper>)>, std::string const&);

    // NOLINTEND
};

}; // namespace ScriptModuleGameTest
