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
    ::ll::UntypedStorage<8, 248> mUnkbaa30c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAsyncGameTestFunction& operator=(ScriptAsyncGameTestFunction const&);
    ScriptAsyncGameTestFunction(ScriptAsyncGameTestFunction const&);
    ScriptAsyncGameTestFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ::std::unique_ptr<::gametest::IGameTestFunctionRunResult>
    run(::gametest::BaseGameTestHelper&, ::gametest::IGameTestFunctionContext& fnContext) const /*override*/;

    // vIndex: 0
    virtual ~ScriptAsyncGameTestFunction() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptAsyncGameTestFunction(
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
    MCNAPI void* $ctor(
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
    MCNAPI ::std::unique_ptr<::gametest::IGameTestFunctionRunResult>
    $run(::gametest::BaseGameTestHelper&, ::gametest::IGameTestFunctionContext& fnContext) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
