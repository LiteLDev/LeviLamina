#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/items/ScriptPlayerInventoryType.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerInventoryItemChangeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>
        mPlayerHandle;
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
        mBeforeItemStack;
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
                                                                                 mAfterItemStack;
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptPlayerInventoryType> mplayerInventoryType;
    ::ll::TypedStorage<4, 4, int>                                                mSlotNumber;
    ::ll::TypedStorage<1, 1, bool>                                               mIsQuantityChangedOnly;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerInventoryItemChangeAfterEvent& operator=(ScriptPlayerInventoryItemChangeAfterEvent const&);
    ScriptPlayerInventoryItemChangeAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    ScriptPlayerInventoryItemChangeAfterEvent(::ScriptModuleMinecraft::ScriptPlayerInventoryItemChangeAfterEvent&&);

    MCAPI ScriptPlayerInventoryItemChangeAfterEvent(
        ::ScriptModuleMinecraft::ScriptPlayerInventoryItemChangeAfterEvent const&
    );

    MCAPI ScriptPlayerInventoryItemChangeAfterEvent(
        ::Player const&                                                                                 player,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> beforeItemStack,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> afterItemStack,
        ::ScriptModuleMinecraft::ScriptPlayerInventoryType playerInventoryType,
        int                                                slotNumber,
        bool                                               isQuantityChanged,
        ::Scripting::WeakLifetimeScope const&              scope
    );

    MCAPI ~ScriptPlayerInventoryItemChangeAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerInventoryItemChangeAfterEvent&&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerInventoryItemChangeAfterEvent const&);

    MCAPI void* $ctor(
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
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
