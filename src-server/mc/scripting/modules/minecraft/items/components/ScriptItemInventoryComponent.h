#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/items/components/ScriptItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft { class ScriptContainerWrapper; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { struct ScriptInvalidContainerError; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemInventoryComponent : public ::ScriptModuleMinecraft::ScriptItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk9eaa3d;
    ::ll::UntypedStorage<8, 40> mUnka64a4f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemInventoryComponent& operator=(ScriptItemInventoryComponent const&);
    ScriptItemInventoryComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptItemInventoryComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptItemInventoryComponent(::ScriptModuleMinecraft::ScriptItemInventoryComponent const&);

    MCNAPI ScriptItemInventoryComponent(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> item, ::Scripting::WeakLifetimeScope const& scope);

    MCNAPI void _tryTrackContainer();

    MCNAPI ::Scripting::Result<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptContainerWrapper>, ::ScriptModuleMinecraft::ScriptInvalidContainerError> getOrCreateContainer();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind(::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);

    MCNAPI static ::std::string const& getTypeName();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemInventoryComponent const&);

    MCNAPI void* $ctor(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> item, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
