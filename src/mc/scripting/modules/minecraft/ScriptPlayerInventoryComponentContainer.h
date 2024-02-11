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
    // vIndex: 0, symbol: ??1ScriptPlayerInventoryComponentContainer@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptPlayerInventoryComponentContainer();

    // vIndex: 13, symbol:
    // ?_tryGetContainer@ScriptPlayerInventoryComponentContainer@ScriptModuleMinecraft@@MEBAPEAVContainer@@XZ
    virtual class Container* _tryGetContainer() const;

    // vIndex: 14, symbol:
    // ?_getItemContext@ScriptPlayerInventoryComponentContainer@ScriptModuleMinecraft@@MEBA?AVItemContext@@H@Z
    virtual class ItemContext _getItemContext(int slot) const;

    // symbol:
    // ??0ScriptPlayerInventoryComponentContainer@ScriptModuleMinecraft@@QEAA@AEBVWeakEntityRef@@AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI ScriptPlayerInventoryComponentContainer(
        class WeakEntityRef const&                entityRef,
        class Scripting::WeakLifetimeScope const& scope
    );

    // symbol:
    // ?bindV010@ScriptPlayerInventoryComponentContainer@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptPlayerInventoryComponentContainer@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<
        class ScriptModuleMinecraft::ScriptPlayerInventoryComponentContainer>
    bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
