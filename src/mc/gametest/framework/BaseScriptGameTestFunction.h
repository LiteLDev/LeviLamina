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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?createContext@BaseScriptGameTestFunction@ScriptModuleGameTest@@UEBA?AV?$unique_ptr@VIGameTestFunctionContext@gametest@@U?$default_delete@VIGameTestFunctionContext@gametest@@@std@@@std@@AEAVBaseGameTestHelper@gametest@@@Z
    virtual std::unique_ptr<class gametest::IGameTestFunctionContext>
    createContext(class gametest::BaseGameTestHelper&) const;

    // symbol: ??1BaseScriptGameTestFunction@ScriptModuleGameTest@@UEAA@XZ
    MCVAPI ~BaseScriptGameTestFunction();

    // symbol:
    // ??0BaseScriptGameTestFunction@ScriptModuleGameTest@@QEAA@VWeakLifetimeScope@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI BaseScriptGameTestFunction(class Scripting::WeakLifetimeScope, std::string const&);

    // NOLINTEND
};

}; // namespace ScriptModuleGameTest
