#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"
#include "mc/gametest/BaseGameTestFunction.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestHelper; }
namespace gametest { class IGameTestFunctionContext; }
// clang-format on

namespace ScriptModuleGameTest {

class BaseScriptGameTestFunction : public ::gametest::BaseGameTestFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseScriptGameTestFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseScriptGameTestFunction() /*override*/ = default;

    virtual ::std::unique_ptr<::gametest::IGameTestFunctionContext>
    createContext(::gametest::BaseGameTestHelper& helper) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BaseScriptGameTestFunction(::Scripting::WeakLifetimeScope scope, ::std::string const& testName);

    MCAPI void addTag(::std::string tag);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scripting::WeakLifetimeScope scope, ::std::string const& testName);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::gametest::IGameTestFunctionContext>
    $createContext(::gametest::BaseGameTestHelper& helper) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
