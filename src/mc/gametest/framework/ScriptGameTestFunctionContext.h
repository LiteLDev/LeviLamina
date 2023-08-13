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
// clang-format on

namespace ScriptModuleGameTest {

class ScriptGameTestFunctionContext : public ::gametest::IGameTestFunctionContext {

public:
    // prevent constructor by default
    ScriptGameTestFunctionContext& operator=(ScriptGameTestFunctionContext const&) = delete;
    ScriptGameTestFunctionContext(ScriptGameTestFunctionContext const&)            = delete;
    ScriptGameTestFunctionContext()                                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ??0ScriptGameTestFunctionContext\@ScriptModuleGameTest\@\@QEAA\@VWeakLifetimeScope\@Scripting\@\@AEAVBaseGameTestHelper\@gametest\@\@\@Z
     */
    MCAPI ScriptGameTestFunctionContext(class Scripting::WeakLifetimeScope, class gametest::BaseGameTestHelper&);
    /**
     * @symbol
     * ?getScriptGameTestHelper\@ScriptGameTestFunctionContext\@ScriptModuleGameTest\@\@QEAA?AV?$WeakTypedObjectHandle\@VScriptGameTestHelper\@ScriptModuleGameTest\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::WeakTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestHelper>
    getScriptGameTestHelper();
    // NOLINTEND
};

}; // namespace ScriptModuleGameTest
