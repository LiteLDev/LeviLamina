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
    // vIndex: 0, symbol: __gen_??1ScriptAsyncGameTestFunction@ScriptModuleGameTest@@UEAA@XZ
    virtual ~ScriptAsyncGameTestFunction() = default;

    // vIndex: 2, symbol:
    // ?run@ScriptAsyncGameTestFunction@ScriptModuleGameTest@@UEBA?AV?$unique_ptr@VIGameTestFunctionRunResult@gametest@@U?$default_delete@VIGameTestFunctionRunResult@gametest@@@std@@@std@@AEAVBaseGameTestHelper@gametest@@AEAVIGameTestFunctionContext@6@@Z
    virtual std::unique_ptr<class gametest::IGameTestFunctionRunResult>
    run(class gametest::BaseGameTestHelper&, class gametest::IGameTestFunctionContext&) const;

    // symbol:
    // ??0ScriptAsyncGameTestFunction@ScriptModuleGameTest@@QEAA@VWeakLifetimeScope@Scripting@@V?$Closure@$$A6A?AV?$Future@X@Scripting@@U?$TypedObjectHandle@VScriptGameTestHelper@ScriptModuleGameTest@@@2@@Z$$V@3@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI
    ScriptAsyncGameTestFunction(class Scripting::WeakLifetimeScope scope, class Scripting::Closure<class Scripting::Future<void>(struct Scripting::TypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestHelper>)>, std::string const&);

    // NOLINTEND
};

}; // namespace ScriptModuleGameTest
