#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/external/scripting/script_engine/Closure.h"

namespace ScriptModuleGameTest {

class ScriptGameTestSequence {
public:
    // prevent constructor by default
    ScriptGameTestSequence& operator=(ScriptGameTestSequence const&);
    ScriptGameTestSequence(ScriptGameTestSequence const&);
    ScriptGameTestSequence();

public:
    // NOLINTBEGIN
    MCAPI class Scripting::WeakTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestSequence>
    thenExecute(class Scripting::Closure<void()> fn);

    MCAPI class Scripting::WeakTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestSequence>
    thenExecuteAfter(int tickDelay, class Scripting::Closure<void()> fn);

    MCAPI class Scripting::WeakTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestSequence>
    thenExecuteFor(int tickCount, class Scripting::Closure<void()> fn);

    MCAPI void thenFail(std::string error);

    MCAPI class Scripting::WeakTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestSequence>
    thenIdle(int tickDelay);

    MCAPI void thenSucceed();

    MCAPI class Scripting::WeakTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestSequence>
    thenWait(class Scripting::Closure<void()> fn);

    MCAPI class Scripting::WeakTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestSequence>
    thenWaitAfter(int tickDelay, class Scripting::Closure<void()> fn);

    // NOLINTEND
};

}; // namespace ScriptModuleGameTest
