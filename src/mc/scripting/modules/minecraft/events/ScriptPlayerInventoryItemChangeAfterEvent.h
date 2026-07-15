#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/items/ScriptPlayerInventoryType.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
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
    MCAPI ScriptPlayerInventoryItemChangeAfterEvent(
        ::ScriptModuleMinecraft::ScriptPlayerInventoryItemChangeAfterEvent const&
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerInventoryItemChangeAfterEvent const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
