#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayAnimationOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>> mPlayerNames;
    ::ll::TypedStorage<
        8,
        32,
        ::std::optional<::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>>>
                                                              mPlayers;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mNextState;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>          mBlendOutTime;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mStopExpression;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mController;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayAnimationOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPlayAnimationOptions(::ScriptModuleMinecraft::ScriptPlayAnimationOptions&&);

    MCAPI ScriptPlayAnimationOptions(::ScriptModuleMinecraft::ScriptPlayAnimationOptions const&);

    MCAPI ::ScriptModuleMinecraft::ScriptPlayAnimationOptions&
    operator=(::ScriptModuleMinecraft::ScriptPlayAnimationOptions&&);

    MCAPI ::ScriptModuleMinecraft::ScriptPlayAnimationOptions&
    operator=(::ScriptModuleMinecraft::ScriptPlayAnimationOptions const&);

    MCAPI ~ScriptPlayAnimationOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bindV1();

    MCAPI static ::Scripting::InterfaceBinding bindV2();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayAnimationOptions&&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayAnimationOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
