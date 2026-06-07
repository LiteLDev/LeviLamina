#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"
#include "mc/deps/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/gametest/framework/IGameTestFunctionContext.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleGameTest { class ScriptGameTestHelper; }
namespace gametest { class BaseGameTestHelper; }
// clang-format on

namespace ScriptModuleGameTest {

class ScriptGameTestFunctionContext : public ::gametest::IGameTestFunctionContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                                 mScope;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleGameTest::ScriptGameTestHelper>> mScriptGameTestHelper;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestHelper>>
        mScriptGameTestHelperHandle;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptGameTestFunctionContext();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptGameTestFunctionContext() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptGameTestFunctionContext(::Scripting::WeakLifetimeScope scope, ::gametest::BaseGameTestHelper& helper);

    MCAPI ::Scripting::WeakTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestHelper> getScriptGameTestHelper();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scripting::WeakLifetimeScope scope, ::gametest::BaseGameTestHelper& helper);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
