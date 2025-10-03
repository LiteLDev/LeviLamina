#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/items/ScriptPlayerInventoryType.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerInventoryItemChangeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk46716e;
    ::ll::UntypedStorage<8, 40> mUnkd7fc2b;
    ::ll::UntypedStorage<8, 40> mUnk4d00a1;
    ::ll::UntypedStorage<4, 4>  mUnkebef61;
    ::ll::UntypedStorage<4, 4>  mUnkb2f621;
    ::ll::UntypedStorage<1, 1>  mUnkb45fee;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerInventoryItemChangeAfterEvent& operator=(ScriptPlayerInventoryItemChangeAfterEvent const&);
    ScriptPlayerInventoryItemChangeAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    ScriptPlayerInventoryItemChangeAfterEvent(::ScriptModuleMinecraft::ScriptPlayerInventoryItemChangeAfterEvent&&);

    MCNAPI ScriptPlayerInventoryItemChangeAfterEvent(
        ::ScriptModuleMinecraft::ScriptPlayerInventoryItemChangeAfterEvent const&
    );

    MCNAPI ScriptPlayerInventoryItemChangeAfterEvent(
        ::Player const&                                                                                 player,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> beforeItemStack,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> afterItemStack,
        ::ScriptModuleMinecraft::ScriptPlayerInventoryType playerInventoryType,
        int                                                slotNumber,
        bool                                               isQuantityChanged,
        ::Scripting::WeakLifetimeScope const&              scope
    );

    MCNAPI ~ScriptPlayerInventoryItemChangeAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerInventoryItemChangeAfterEvent&&);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerInventoryItemChangeAfterEvent const&);

    MCNAPI void* $ctor(
        ::Player const&                                                                                 player,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> beforeItemStack,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> afterItemStack,
        ::ScriptModuleMinecraft::ScriptPlayerInventoryType playerInventoryType,
        int                                                slotNumber,
        bool                                               isQuantityChanged,
        ::Scripting::WeakLifetimeScope const&              scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
