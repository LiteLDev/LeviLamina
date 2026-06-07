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
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPlayerInventoryComponentContainer : public ::ScriptModuleMinecraft::ScriptInventoryComponentContainer {
public:
    // prevent constructor by default
    ScriptPlayerInventoryComponentContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptPlayerInventoryComponentContainer() /*override*/ = default;

    virtual ::Container* _tryGetContainer() const /*override*/;

    virtual ::ItemContext _getItemContext(int slot) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPlayerInventoryComponentContainer(
        ::WeakEntityRef const&                entityRef,
        ::Scripting::WeakLifetimeScope const& scope
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bindV010();
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

    MCFOLD ::ItemContext $_getItemContext(int slot) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
