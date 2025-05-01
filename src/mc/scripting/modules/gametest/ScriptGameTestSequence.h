#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/deps/scripting/script_engine/Closure.h"

namespace ScriptModuleGameTest {

class ScriptGameTestSequence {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk87fcd3;
    ::ll::UntypedStorage<8, 16> mUnkad14c4;
    ::ll::UntypedStorage<8, 32> mUnkeee3da;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptGameTestSequence& operator=(ScriptGameTestSequence const&);
    ScriptGameTestSequence(ScriptGameTestSequence const&);
    ScriptGameTestSequence();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::WeakTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestSequence>
    thenExecute(::Scripting::Closure<void()> fn);

    MCNAPI ::Scripting::WeakTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestSequence>
    thenExecuteAfter(int tickDelay, ::Scripting::Closure<void()> fn);

    MCNAPI ::Scripting::WeakTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestSequence>
    thenExecuteFor(int tickCount, ::Scripting::Closure<void()> fn);

    MCNAPI void thenFail(::std::string error);

    MCNAPI ::Scripting::WeakTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestSequence> thenIdle(int tickDelay);

    MCNAPI ::Scripting::WeakTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestSequence>
    thenWait(::Scripting::Closure<void()> fn);

    MCNAPI ::Scripting::WeakTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestSequence>
    thenWaitAfter(int tickDelay, ::Scripting::Closure<void()> fn);
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
