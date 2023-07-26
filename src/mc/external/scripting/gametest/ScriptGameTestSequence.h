#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/Closure.h"
#include "mc/external/scripting/WeakTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
namespace gametest { class GameTestSequence; }
// clang-format on

namespace ScriptModuleGameTest {

class ScriptGameTestSequence {

public:
    // prevent constructor by default
    ScriptGameTestSequence& operator=(ScriptGameTestSequence const&) = delete;
    ScriptGameTestSequence(ScriptGameTestSequence const&)            = delete;
    ScriptGameTestSequence()                                         = delete;

public:
    /**
     * @symbol
     * ??0ScriptGameTestSequence\@ScriptModuleGameTest\@\@QEAA\@AEAVGameTestSequence\@gametest\@\@VWeakLifetimeScope\@Scripting\@\@\@Z
     */
    MCAPI ScriptGameTestSequence(class gametest::GameTestSequence&, class Scripting::WeakLifetimeScope); // NOLINT
    /**
     * @symbol
     * ?thenExecute\@ScriptGameTestSequence\@ScriptModuleGameTest\@\@QEAA?AV?$WeakTypedObjectHandle\@VScriptGameTestSequence\@ScriptModuleGameTest\@\@\@Scripting\@\@V?$Closure\@$$A6AXXZ$$V\@4\@\@Z
     */
    MCAPI class Scripting::WeakTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestSequence>
        thenExecute(class Scripting::Closure<void(void)>); // NOLINT
    /**
     * @symbol
     * ?thenExecuteAfter\@ScriptGameTestSequence\@ScriptModuleGameTest\@\@QEAA?AV?$WeakTypedObjectHandle\@VScriptGameTestSequence\@ScriptModuleGameTest\@\@\@Scripting\@\@HV?$Closure\@$$A6AXXZ$$V\@4\@\@Z
     */
    MCAPI class Scripting::WeakTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestSequence>
    thenExecuteAfter(int, class Scripting::Closure<void(void)>); // NOLINT
    /**
     * @symbol
     * ?thenExecuteFor\@ScriptGameTestSequence\@ScriptModuleGameTest\@\@QEAA?AV?$WeakTypedObjectHandle\@VScriptGameTestSequence\@ScriptModuleGameTest\@\@\@Scripting\@\@HV?$Closure\@$$A6AXXZ$$V\@4\@\@Z
     */
    MCAPI class Scripting::WeakTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestSequence>
    thenExecuteFor(int, class Scripting::Closure<void(void)>); // NOLINT
    /**
     * @symbol
     * ?thenFail\@ScriptGameTestSequence\@ScriptModuleGameTest\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void thenFail(std::string); // NOLINT
    /**
     * @symbol
     * ?thenIdle\@ScriptGameTestSequence\@ScriptModuleGameTest\@\@QEAA?AV?$WeakTypedObjectHandle\@VScriptGameTestSequence\@ScriptModuleGameTest\@\@\@Scripting\@\@H\@Z
     */
    MCAPI class Scripting::WeakTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestSequence> thenIdle(int
    ); // NOLINT
    /**
     * @symbol ?thenSucceed\@ScriptGameTestSequence\@ScriptModuleGameTest\@\@QEAAXXZ
     */
    MCAPI void thenSucceed(); // NOLINT
    /**
     * @symbol
     * ?thenWait\@ScriptGameTestSequence\@ScriptModuleGameTest\@\@QEAA?AV?$WeakTypedObjectHandle\@VScriptGameTestSequence\@ScriptModuleGameTest\@\@\@Scripting\@\@V?$Closure\@$$A6AXXZ$$V\@4\@\@Z
     */
    MCAPI class Scripting::WeakTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestSequence>
        thenWait(class Scripting::Closure<void(void)>); // NOLINT
    /**
     * @symbol
     * ?thenWaitAfter\@ScriptGameTestSequence\@ScriptModuleGameTest\@\@QEAA?AV?$WeakTypedObjectHandle\@VScriptGameTestSequence\@ScriptModuleGameTest\@\@\@Scripting\@\@HV?$Closure\@$$A6AXXZ$$V\@4\@\@Z
     */
    MCAPI class Scripting::WeakTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestSequence>
    thenWaitAfter(int, class Scripting::Closure<void(void)>); // NOLINT
    /**
     * @symbol ??1ScriptGameTestSequence\@ScriptModuleGameTest\@\@QEAA\@XZ
     */
    MCAPI ~ScriptGameTestSequence(); // NOLINT
};

}; // namespace ScriptModuleGameTest
