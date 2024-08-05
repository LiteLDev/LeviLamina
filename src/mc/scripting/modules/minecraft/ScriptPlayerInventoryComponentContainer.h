#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptInventoryComponentContainer.h"

// auto generated forward declare list
// clang-format off
class Container;
class ItemContext;
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptContainer; }
namespace ScriptModuleMinecraft { class ScriptContainerSlot; }
namespace ScriptModuleMinecraft { class ScriptContainerWrapper; }
namespace ScriptModuleMinecraft { class ScriptInventoryComponentContainer; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPlayerInventoryComponentContainer : public ::ScriptModuleMinecraft::ScriptInventoryComponentContainer {
public:
    // prevent constructor by default
    ScriptPlayerInventoryComponentContainer& operator=(ScriptPlayerInventoryComponentContainer const&);
    ScriptPlayerInventoryComponentContainer(ScriptPlayerInventoryComponentContainer const&);
    ScriptPlayerInventoryComponentContainer();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptPlayerInventoryComponentContainer();

    // vIndex: 13
    virtual class Container* _tryGetContainer() const;

    // vIndex: 14
    virtual class ItemContext _getItemContext(int slot) const;

    MCAPI ScriptPlayerInventoryComponentContainer(
        class WeakEntityRef const&                entityRef,
        class Scripting::WeakLifetimeScope const& scope
    );

    MCAPI static class Scripting::ClassBindingBuilder<
        class ScriptModuleMinecraft::ScriptPlayerInventoryComponentContainer>
    bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
