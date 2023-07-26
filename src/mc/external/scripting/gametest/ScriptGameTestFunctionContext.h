#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/WeakTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleGameTest { class ScriptGameTestHelper; }
namespace Scripting { class WeakLifetimeScope; }
namespace gametest { class BaseGameTestHelper; }
// clang-format on

namespace ScriptModuleGameTest {

class ScriptGameTestFunctionContext {

public:
    // prevent constructor by default
    ScriptGameTestFunctionContext& operator=(ScriptGameTestFunctionContext const&) = delete;
    ScriptGameTestFunctionContext(ScriptGameTestFunctionContext const&)            = delete;
    ScriptGameTestFunctionContext()                                                = delete;

public:
    /**
     * @symbol
     * ??0ScriptGameTestFunctionContext\@ScriptModuleGameTest\@\@QEAA\@VWeakLifetimeScope\@Scripting\@\@AEAVBaseGameTestHelper\@gametest\@\@\@Z
     */
    MCAPI
    ScriptGameTestFunctionContext(class Scripting::WeakLifetimeScope, class gametest::BaseGameTestHelper&); // NOLINT
    /**
     * @symbol
     * ?getScriptGameTestHelper\@ScriptGameTestFunctionContext\@ScriptModuleGameTest\@\@QEAA?AV?$WeakTypedObjectHandle\@VScriptGameTestHelper\@ScriptModuleGameTest\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::WeakTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestHelper>
    getScriptGameTestHelper(); // NOLINT
};

}; // namespace ScriptModuleGameTest
