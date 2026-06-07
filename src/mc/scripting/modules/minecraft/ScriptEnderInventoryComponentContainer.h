#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptInventoryComponentContainer.h"

// auto generated forward declare list
// clang-format off
class Container;
class ItemContext;
class WeakEntityRef;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEnderInventoryComponentContainer : public ::ScriptModuleMinecraft::ScriptInventoryComponentContainer {
public:
    // prevent constructor by default
    ScriptEnderInventoryComponentContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Container* _tryGetContainer() const /*override*/;

    virtual ::ItemContext _getItemContext(int slot) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptEnderInventoryComponentContainer(
        ::WeakEntityRef const&                entityRef,
        ::Scripting::WeakLifetimeScope const& scope
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::WeakEntityRef const& entityRef, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
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
