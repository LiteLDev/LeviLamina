#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"
#include "mc/deps/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/deps/scripting/script_engine/Closure.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class GameTestSequence; }
// clang-format on

namespace ScriptModuleGameTest {

class ScriptGameTestSequence {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gametest::GameTestSequence&>   mSequence;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestSequence>>
        mScriptHandle;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptGameTestSequence& operator=(ScriptGameTestSequence const&);
    ScriptGameTestSequence(ScriptGameTestSequence const&);
    ScriptGameTestSequence();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::WeakTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestSequence>
    thenExecute(::Scripting::Closure<void()> fn);

    MCAPI ::Scripting::WeakTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestSequence>
    thenExecuteAfter(int tickDelay, ::Scripting::Closure<void()> fn);

    MCAPI ::Scripting::WeakTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestSequence>
    thenExecuteFor(int tickCount, ::Scripting::Closure<void()> fn);

    MCAPI void thenFail(::std::string error);

    MCAPI ::Scripting::WeakTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestSequence>
    thenWait(::Scripting::Closure<void()> fn);

    MCAPI ::Scripting::WeakTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestSequence>
    thenWaitAfter(int tickDelay, ::Scripting::Closure<void()> fn);
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
