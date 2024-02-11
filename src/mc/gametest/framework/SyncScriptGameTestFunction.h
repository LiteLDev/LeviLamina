#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/BaseScriptGameTestFunction.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleGameTest { class BaseScriptGameTestFunction; }
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
    // vIndex: 0, symbol: __gen_??1SyncScriptGameTestFunction@ScriptModuleGameTest@@UEAA@XZ
    virtual ~SyncScriptGameTestFunction() = default;

    // vIndex: 2, symbol:
    // ?run@SyncScriptGameTestFunction@ScriptModuleGameTest@@UEBA?AV?$unique_ptr@VIGameTestFunctionRunResult@gametest@@U?$default_delete@VIGameTestFunctionRunResult@gametest@@@std@@@std@@AEAVBaseGameTestHelper@gametest@@AEAVIGameTestFunctionContext@6@@Z
    virtual std::unique_ptr<class gametest::IGameTestFunctionRunResult>
    run(class gametest::BaseGameTestHelper&, class gametest::IGameTestFunctionContext&) const;

    // NOLINTEND
};

}; // namespace ScriptModuleGameTest
