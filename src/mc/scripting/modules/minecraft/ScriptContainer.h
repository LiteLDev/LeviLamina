#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Container;
class ItemContext;
namespace ScriptModuleMinecraft { class ScriptContainerSlot; }
namespace ScriptModuleMinecraft { class ScriptContainerWrapper; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptContainer {
public:
    // prevent constructor by default
    ScriptContainer& operator=(ScriptContainer const&);
    ScriptContainer(ScriptContainer const&);
    ScriptContainer();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptContainer@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptContainer() = default;

    // vIndex: 1, symbol: ?getSize@ScriptContainer@ScriptModuleMinecraft@@UEBA?AV?$Result@H$$V@Scripting@@XZ
    virtual class Scripting::Result<int> getSize() const;

    // vIndex: 2, symbol: ?getEmptySlotsCount@ScriptContainer@ScriptModuleMinecraft@@UEBA?AV?$Result@H$$V@Scripting@@XZ
    virtual class Scripting::Result<int> getEmptySlotsCount() const;

    // vIndex: 3, symbol:
    // ?setItemV010@ScriptContainer@ScriptModuleMinecraft@@UEBA?AV?$Result@X$$V@Scripting@@HAEBVScriptItemStack@2@@Z
    virtual class Scripting::Result<void>
    setItemV010(int slot, class ScriptModuleMinecraft::ScriptItemStack const&) const;

    // vIndex: 4, symbol:
    // ?setItem@ScriptContainer@ScriptModuleMinecraft@@UEBA?AV?$Result@X$$V@Scripting@@HAEBV?$optional@VScriptItemStack@ScriptModuleMinecraft@@@std@@@Z
    virtual class Scripting::Result<void>
    setItem(int slot, std::optional<class ScriptModuleMinecraft::ScriptItemStack> const&) const;

    // vIndex: 5, symbol:
    // ?getItem@ScriptContainer@ScriptModuleMinecraft@@UEBA?AV?$Result@V?$optional@V?$StrongTypedObjectHandle@VScriptItemStack@ScriptModuleMinecraft@@@Scripting@@@std@@$$V@Scripting@@H@Z
    virtual class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>>
    getItem(int slot) const;

    // vIndex: 6, symbol:
    // ?addItemV010@ScriptContainer@ScriptModuleMinecraft@@UEBA?AV?$Result@X$$V@Scripting@@AEBVScriptItemStack@2@@Z
    virtual class Scripting::Result<void> addItemV010(class ScriptModuleMinecraft::ScriptItemStack const&) const;

    // vIndex: 7, symbol:
    // ?transferItemV010@ScriptContainer@ScriptModuleMinecraft@@UEBA?AV?$Result@_N$$V@Scripting@@HHAEAV12@@Z
    virtual class Scripting::Result<bool>
    transferItemV010(int, int, class ScriptModuleMinecraft::ScriptContainer&) const;

    // vIndex: 8, symbol:
    // ?moveItem@ScriptContainer@ScriptModuleMinecraft@@UEBA?AV?$Result@X$$V@Scripting@@HHAEAVScriptContainerWrapper@2@@Z
    virtual class Scripting::Result<void>
    moveItem(int, int, class ScriptModuleMinecraft::ScriptContainerWrapper&) const;

    // vIndex: 9, symbol:
    // ?swapItemsV010@ScriptContainer@ScriptModuleMinecraft@@UEBA?AV?$Result@_N$$V@Scripting@@HHAEAV12@@Z
    virtual class Scripting::Result<bool>
    swapItemsV010(int slot, int, class ScriptModuleMinecraft::ScriptContainer&) const;

    // vIndex: 10, symbol:
    // ?swapItems@ScriptContainer@ScriptModuleMinecraft@@UEBA?AV?$Result@X$$V@Scripting@@HHAEAVScriptContainerWrapper@2@@Z
    virtual class Scripting::Result<void>
    swapItems(int slot, int, class ScriptModuleMinecraft::ScriptContainerWrapper&) const;

    // vIndex: 11, symbol:
    // ?getSlot@ScriptContainer@ScriptModuleMinecraft@@UEBA?AV?$Result@V?$StrongTypedObjectHandle@VScriptContainerSlot@ScriptModuleMinecraft@@@Scripting@@$$V@Scripting@@H@Z
    virtual class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptContainerSlot>>
    getSlot(int slot) const;

    // vIndex: 12, symbol: ?clearAll@ScriptContainer@ScriptModuleMinecraft@@UEBA?AV?$Result@X$$V@Scripting@@XZ
    virtual class Scripting::Result<void> clearAll() const;

    // vIndex: 13, symbol:
    // ?_tryGetContainer@ScriptBlockInventoryComponentContainer@ScriptModuleMinecraft@@MEBAPEAVContainer@@XZ
    virtual class Container* _tryGetContainer() const = 0;

    // vIndex: 14, symbol:
    // ?_getItemContext@ScriptBlockInventoryComponentContainer@ScriptModuleMinecraft@@MEBA?AVItemContext@@H@Z
    virtual class ItemContext _getItemContext(int slot) const = 0;

    // symbol:
    // ?addItem@ScriptContainer@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$StrongTypedObjectHandle@VScriptItemStack@ScriptModuleMinecraft@@@Scripting@@@std@@$$V@Scripting@@AEBVScriptItemStack@2@@Z
    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>>
    addItem(class ScriptModuleMinecraft::ScriptItemStack const&) const;

    // symbol: ?isValid@ScriptContainer@ScriptModuleMinecraft@@QEBA_NXZ
    MCAPI bool isValid() const;

    // symbol:
    // ?transferItem@ScriptContainer@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$StrongTypedObjectHandle@VScriptItemStack@ScriptModuleMinecraft@@@Scripting@@@std@@$$V@Scripting@@HAEAVScriptContainerWrapper@2@@Z
    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>>
    transferItem(int, class ScriptModuleMinecraft::ScriptContainerWrapper&) const;

    // symbol:
    // ?bind@ScriptContainer@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptContainer@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptContainer> bind();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?_isSlotInvalid@ScriptContainer@ScriptModuleMinecraft@@KA?AV?$optional@UError@Scripting@@@std@@AEAVContainer@@H@Z
    MCAPI static std::optional<struct Scripting::Error> _isSlotInvalid(class Container& container, int slot);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
