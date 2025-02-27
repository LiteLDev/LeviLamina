#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/deps/scripting/script_engine/Closure.h"
#include "mc/scripting/modules/gametest/BaseScriptGameTestFunction.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleGameTest { class ScriptGameTestHelper; }
namespace Scripting { class WeakLifetimeScope; }
namespace gametest { class BaseGameTestHelper; }
namespace gametest { class IGameTestFunctionContext; }
namespace gametest { class IGameTestFunctionRunResult; }
// clang-format on

namespace ScriptModuleGameTest {

class SyncScriptGameTestFunction : public ::ScriptModuleGameTest::BaseScriptGameTestFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88> mUnkb88201;
    // NOLINTEND

public:
    // prevent constructor by default
    SyncScriptGameTestFunction& operator=(SyncScriptGameTestFunction const&);
    SyncScriptGameTestFunction(SyncScriptGameTestFunction const&);
    SyncScriptGameTestFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ::std::unique_ptr<::gametest::IGameTestFunctionRunResult>
    run(::gametest::BaseGameTestHelper&, ::gametest::IGameTestFunctionContext& fnContext) const /*override*/;

    // vIndex: 0
    virtual ~SyncScriptGameTestFunction() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SyncScriptGameTestFunction(
        ::Scripting::WeakLifetimeScope scope,
        ::Scripting::Closure<void(::Scripting::TypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestHelper>)>
                             functionHandle,
        ::std::string const& testName
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Scripting::WeakLifetimeScope scope,
        ::Scripting::Closure<void(::Scripting::TypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestHelper>)>
                             functionHandle,
        ::std::string const& testName
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::gametest::IGameTestFunctionRunResult>
    $run(::gametest::BaseGameTestHelper&, ::gametest::IGameTestFunctionContext& fnContext) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
