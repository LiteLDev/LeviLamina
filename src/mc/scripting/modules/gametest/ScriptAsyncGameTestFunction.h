#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/deps/scripting/script_engine/Closure.h"
#include "mc/deps/scripting/script_engine/Future.h"
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

class ScriptAsyncGameTestFunction : public ::ScriptModuleGameTest::BaseScriptGameTestFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        104,
        ::Scripting::Closure<
            ::Scripting::Future<void>(::Scripting::TypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestHelper>)>>
        mFunction;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAsyncGameTestFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::gametest::IGameTestFunctionRunResult>
    run(::gametest::BaseGameTestHelper&, ::gametest::IGameTestFunctionContext& fnContext) const /*override*/;

    virtual ~ScriptAsyncGameTestFunction() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptAsyncGameTestFunction(
        ::Scripting::WeakLifetimeScope scope,
        ::Scripting::Closure<
            ::Scripting::Future<void>(::Scripting::TypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestHelper>)>
                             functionHandle,
        ::std::string const& testName
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Scripting::WeakLifetimeScope scope,
        ::Scripting::Closure<
            ::Scripting::Future<void>(::Scripting::TypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestHelper>)>
                             functionHandle,
        ::std::string const& testName
    );
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
