#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/ScriptContainer.h"

// auto generated forward declare list
// clang-format off
class Container;
class ItemContext;
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptContainer; }
namespace ScriptModuleMinecraft { class ScriptContainerSlot; }
namespace ScriptModuleMinecraft { class ScriptContainerWrapper; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptInventoryComponentContainer : public ::ScriptModuleMinecraft::ScriptContainer {
public:
    // prevent constructor by default
    ScriptInventoryComponentContainer();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptInventoryComponentContainer();

    // vIndex: 2
    virtual class Scripting::Result<int> getEmptySlotsCount() const;

    // vIndex: 13
    virtual class Container* _tryGetContainer() const;

    // vIndex: 14
    virtual class ItemContext _getItemContext(int slot) const;

    MCAPI ScriptInventoryComponentContainer(class ScriptModuleMinecraft::ScriptInventoryComponentContainer const&);

    MCAPI ScriptInventoryComponentContainer(
        class WeakEntityRef const&                entityRef,
        class Scripting::WeakLifetimeScope const& scope
    );

    MCAPI class ScriptModuleMinecraft::ScriptInventoryComponentContainer&
    operator=(class ScriptModuleMinecraft::ScriptInventoryComponentContainer const&);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptInventoryComponentContainer>
    bindV010();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class ScriptModuleMinecraft::ScriptInventoryComponentContainer const&);

    MCAPI void* ctor$(class WeakEntityRef const& entityRef, class Scripting::WeakLifetimeScope const& scope);

    MCAPI void dtor$();

    MCAPI class ItemContext _getItemContext$(int slot) const;

    MCAPI class Container* _tryGetContainer$() const;

    MCAPI class Scripting::Result<int> getEmptySlotsCount$() const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
