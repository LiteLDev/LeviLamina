#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerSwingStartAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>
        mPlayerHandle;
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
        mHeldItemStack;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerSwingStartAfterEvent& operator=(ScriptPlayerSwingStartAfterEvent const&);
    ScriptPlayerSwingStartAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPlayerSwingStartAfterEvent(::ScriptModuleMinecraft::ScriptPlayerSwingStartAfterEvent const&);

    MCAPI ScriptPlayerSwingStartAfterEvent(
        ::Player const&                                                                                 player,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> heldItemStack,
        ::Scripting::WeakLifetimeScope const&                                                           scope
    );

    MCAPI ~ScriptPlayerSwingStartAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerSwingStartAfterEvent const&);

    MCAPI void* $ctor(
        ::Player const&                                                                                 player,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> heldItemStack,
        ::Scripting::WeakLifetimeScope const&                                                           scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
