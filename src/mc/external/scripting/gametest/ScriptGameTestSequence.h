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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEGAMETEST_SCRIPTGAMETESTSEQUENCE
public:
    ScriptGameTestSequence& operator=(ScriptGameTestSequence const&) = delete;
    ScriptGameTestSequence(ScriptGameTestSequence const&)            = delete;
    ScriptGameTestSequence()                                         = delete;
#endif

public:
    /**
     * @symbol
     * ??0ScriptGameTestSequence\@ScriptModuleGameTest\@\@QEAA\@AEAVGameTestSequence\@gametest\@\@VWeakLifetimeScope\@Scripting\@\@\@Z
     */
    MCAPI ScriptGameTestSequence(class gametest::GameTestSequence&, class Scripting::WeakLifetimeScope);
    /**
     * @symbol
     * ?thenExecute\@ScriptGameTestSequence\@ScriptModuleGameTest\@\@QEAA?AV?$WeakTypedObjectHandle\@VScriptGameTestSequence\@ScriptModuleGameTest\@\@\@Scripting\@\@V?$Closure\@$$A6AXXZ$$V\@4\@\@Z
     */
    MCAPI class Scripting::WeakTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestSequence>
        thenExecute(class Scripting::Closure<void(void)>);
    /**
     * @symbol
     * ?thenExecuteAfter\@ScriptGameTestSequence\@ScriptModuleGameTest\@\@QEAA?AV?$WeakTypedObjectHandle\@VScriptGameTestSequence\@ScriptModuleGameTest\@\@\@Scripting\@\@HV?$Closure\@$$A6AXXZ$$V\@4\@\@Z
     */
    MCAPI class Scripting::WeakTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestSequence>
    thenExecuteAfter(int, class Scripting::Closure<void(void)>);
    /**
     * @symbol
     * ?thenExecuteFor\@ScriptGameTestSequence\@ScriptModuleGameTest\@\@QEAA?AV?$WeakTypedObjectHandle\@VScriptGameTestSequence\@ScriptModuleGameTest\@\@\@Scripting\@\@HV?$Closure\@$$A6AXXZ$$V\@4\@\@Z
     */
    MCAPI class Scripting::WeakTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestSequence>
    thenExecuteFor(int, class Scripting::Closure<void(void)>);
    /**
     * @symbol
     * ?thenFail\@ScriptGameTestSequence\@ScriptModuleGameTest\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void thenFail(std::string);
    /**
     * @symbol
     * ?thenIdle\@ScriptGameTestSequence\@ScriptModuleGameTest\@\@QEAA?AV?$WeakTypedObjectHandle\@VScriptGameTestSequence\@ScriptModuleGameTest\@\@\@Scripting\@\@H\@Z
     */
    MCAPI class Scripting::WeakTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestSequence> thenIdle(int);
    /**
     * @symbol ?thenSucceed\@ScriptGameTestSequence\@ScriptModuleGameTest\@\@QEAAXXZ
     */
    MCAPI void thenSucceed();
    /**
     * @symbol
     * ?thenWait\@ScriptGameTestSequence\@ScriptModuleGameTest\@\@QEAA?AV?$WeakTypedObjectHandle\@VScriptGameTestSequence\@ScriptModuleGameTest\@\@\@Scripting\@\@V?$Closure\@$$A6AXXZ$$V\@4\@\@Z
     */
    MCAPI class Scripting::WeakTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestSequence>
        thenWait(class Scripting::Closure<void(void)>);
    /**
     * @symbol
     * ?thenWaitAfter\@ScriptGameTestSequence\@ScriptModuleGameTest\@\@QEAA?AV?$WeakTypedObjectHandle\@VScriptGameTestSequence\@ScriptModuleGameTest\@\@\@Scripting\@\@HV?$Closure\@$$A6AXXZ$$V\@4\@\@Z
     */
    MCAPI class Scripting::WeakTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestSequence>
    thenWaitAfter(int, class Scripting::Closure<void(void)>);
    /**
     * @symbol ??1ScriptGameTestSequence\@ScriptModuleGameTest\@\@QEAA\@XZ
     */
    MCAPI ~ScriptGameTestSequence();
};

}; // namespace ScriptModuleGameTest
