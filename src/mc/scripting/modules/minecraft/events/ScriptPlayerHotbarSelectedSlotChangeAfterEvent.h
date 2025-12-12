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

struct ScriptPlayerHotbarSelectedSlotChangeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>
                                  mPlayerHandle;
    ::ll::TypedStorage<4, 4, int> mPreviousSlotSelected;
    ::ll::TypedStorage<4, 4, int> mNewSlotSelected;
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
        mItemStack;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerHotbarSelectedSlotChangeAfterEvent& operator=(ScriptPlayerHotbarSelectedSlotChangeAfterEvent const&);
    ScriptPlayerHotbarSelectedSlotChangeAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPlayerHotbarSelectedSlotChangeAfterEvent(
        ::ScriptModuleMinecraft::ScriptPlayerHotbarSelectedSlotChangeAfterEvent const&
    );

    MCAPI ScriptPlayerHotbarSelectedSlotChangeAfterEvent(
        ::Player const& player,
        int             previousSlotSelected,
        int             newSlotSelected,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> item,
        ::Scripting::WeakLifetimeScope const&                                                           scope
    );

    MCAPI ~ScriptPlayerHotbarSelectedSlotChangeAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerHotbarSelectedSlotChangeAfterEvent const&);

    MCAPI void* $ctor(
        ::Player const& player,
        int             previousSlotSelected,
        int             newSlotSelected,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> item,
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
