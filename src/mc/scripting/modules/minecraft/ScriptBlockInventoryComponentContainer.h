#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptContainer.h"

// auto generated forward declare list
// clang-format off
class Container;
class ItemContext;
namespace ScriptModuleMinecraft { class ScriptContainer; }
namespace ScriptModuleMinecraft { class ScriptContainerSlot; }
namespace ScriptModuleMinecraft { class ScriptContainerWrapper; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockInventoryComponentContainer : public ::ScriptModuleMinecraft::ScriptContainer {
public:
    // prevent constructor by default
    ScriptBlockInventoryComponentContainer& operator=(ScriptBlockInventoryComponentContainer const&);
    ScriptBlockInventoryComponentContainer(ScriptBlockInventoryComponentContainer const&);
    ScriptBlockInventoryComponentContainer();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptBlockInventoryComponentContainer@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptBlockInventoryComponentContainer() = default;

    // vIndex: 2, symbol:
    // ?getEmptySlotsCount@ScriptBlockInventoryComponentContainer@ScriptModuleMinecraft@@UEBA?AV?$Result@H$$V@Scripting@@XZ
    virtual class Scripting::Result<int> getEmptySlotsCount() const;

    // vIndex: 13, symbol:
    // ?_tryGetContainer@ScriptBlockInventoryComponentContainer@ScriptModuleMinecraft@@MEBAPEAVContainer@@XZ
    virtual class Container* _tryGetContainer() const;

    // vIndex: 14, symbol:
    // ?_getItemContext@ScriptBlockInventoryComponentContainer@ScriptModuleMinecraft@@MEBA?AVItemContext@@H@Z
    virtual class ItemContext _getItemContext(int slot) const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
