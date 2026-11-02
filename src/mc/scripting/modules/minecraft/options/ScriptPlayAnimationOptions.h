#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

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
    MCNAPI ScriptPlayAnimationOptions(::ScriptModuleMinecraft::ScriptPlayAnimationOptions const&);

    MCNAPI ::ScriptModuleMinecraft::ScriptPlayAnimationOptions&
    operator=(::ScriptModuleMinecraft::ScriptPlayAnimationOptions&&);

    MCNAPI ::ScriptModuleMinecraft::ScriptPlayAnimationOptions&
    operator=(::ScriptModuleMinecraft::ScriptPlayAnimationOptions const&);

    MCNAPI ~ScriptPlayAnimationOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindV1();

    MCNAPI static ::Scripting::InterfaceBinding bindV2();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayAnimationOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
