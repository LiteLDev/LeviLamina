#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
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
    // vIndex: 0, symbol: ??1ScriptInventoryComponentContainer@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptInventoryComponentContainer();

    // vIndex: 2, symbol:
    // ?getEmptySlotsCount@ScriptInventoryComponentContainer@ScriptModuleMinecraft@@UEBA?AV?$Result@H$$V@Scripting@@XZ
    virtual class Scripting::Result<int> getEmptySlotsCount() const;

    // vIndex: 13, symbol:
    // ?_tryGetContainer@ScriptInventoryComponentContainer@ScriptModuleMinecraft@@MEBAPEAVContainer@@XZ
    virtual class Container* _tryGetContainer() const;

    // vIndex: 14, symbol:
    // ?_getItemContext@ScriptInventoryComponentContainer@ScriptModuleMinecraft@@MEBA?AVItemContext@@H@Z
    virtual class ItemContext _getItemContext(int slot) const;

    // symbol: ??0ScriptInventoryComponentContainer@ScriptModuleMinecraft@@QEAA@AEBV01@@Z
    MCAPI ScriptInventoryComponentContainer(class ScriptModuleMinecraft::ScriptInventoryComponentContainer const&);

    // symbol:
    // ??0ScriptInventoryComponentContainer@ScriptModuleMinecraft@@QEAA@AEBVWeakEntityRef@@AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI ScriptInventoryComponentContainer(
        class WeakEntityRef const&                entityRef,
        class Scripting::WeakLifetimeScope const& scope
    );

    // symbol: ??4ScriptInventoryComponentContainer@ScriptModuleMinecraft@@QEAAAEAV01@AEBV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptInventoryComponentContainer&
    operator=(class ScriptModuleMinecraft::ScriptInventoryComponentContainer const&);

    // symbol:
    // ?bindV010@ScriptInventoryComponentContainer@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptInventoryComponentContainer@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptInventoryComponentContainer>
    bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
