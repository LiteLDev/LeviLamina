#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/ScriptContainer.h"
#include "mc/world/containers/FullContainerName.h"

// auto generated forward declare list
// clang-format off
class Container;
class ItemContext;
namespace ScriptModuleMinecraft { class ScriptContainerRules; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemInventoryComponentContainer : public ::ScriptModuleMinecraft::ScriptContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>
                                                         mWeakItemStackHandle;
    ::ll::TypedStorage<4, 12, ::FullContainerName const> mFullContainerName;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemInventoryComponentContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptItemInventoryComponentContainer() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<int> getEmptySlotsCount() const /*override*/;

    virtual ::Container* _tryGetContainer() const /*override*/;

    virtual ::ItemContext _getItemContext(int slot) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptItemInventoryComponentContainer(
        ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> weakItemStackHandle,
        ::FullContainerName const&                                                   fullContainerName,
        ::ScriptModuleMinecraft::ScriptContainerRules const&                         containerRules,
        ::Scripting::WeakLifetimeScope const&                                        scope
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> weakItemStackHandle,
        ::FullContainerName const&                                                   fullContainerName,
        ::ScriptModuleMinecraft::ScriptContainerRules const&                         containerRules,
        ::Scripting::WeakLifetimeScope const&                                        scope
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Scripting::Result_deprecated<int> $getEmptySlotsCount() const;

    MCAPI ::Container* $_tryGetContainer() const;

    MCAPI ::ItemContext $_getItemContext(int slot) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
