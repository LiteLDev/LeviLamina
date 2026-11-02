#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/items/components/ScriptItemComponent.h"

// auto generated forward declare list
// clang-format off
class DynamicContainerTracker;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemInventoryComponent : public ::ScriptModuleMinecraft::ScriptItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::DynamicContainerTracker>>     mDynamicContainerTracker;
    ::ll::TypedStorage<8, 40, ::std::optional<::Scripting::StrongObjectHandle>> mScriptContainer;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemInventoryComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptItemInventoryComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptItemInventoryComponent(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> item,
        ::Scripting::WeakLifetimeScope const&                                          scope
    );

    MCNAPI void _tryTrackContainer();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> item,
        ::Scripting::WeakLifetimeScope const&                                          scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
