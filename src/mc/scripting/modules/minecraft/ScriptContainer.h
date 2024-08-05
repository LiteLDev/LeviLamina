#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Container;
class ItemContext;
namespace ScriptModuleMinecraft { class ScriptContainerSlot; }
namespace ScriptModuleMinecraft { class ScriptContainerWrapper; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
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
    // vIndex: 0
    virtual ~ScriptContainer() = default;

    // vIndex: 1
    virtual class Scripting::Result<int> getSize() const;

    // vIndex: 2
    virtual class Scripting::Result<int> getEmptySlotsCount() const;

    // vIndex: 3
    virtual class Scripting::Result<void>
    setItemV010(int slot, class ScriptModuleMinecraft::ScriptItemStack const&) const;

    // vIndex: 4
    virtual class Scripting::Result<void>
    setItem(int slot, std::optional<class ScriptModuleMinecraft::ScriptItemStack> const&) const;

    // vIndex: 5
    virtual class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>>
    getItem(int slot) const;

    // vIndex: 6
    virtual class Scripting::Result<void> addItemV010(class ScriptModuleMinecraft::ScriptItemStack const&) const;

    // vIndex: 7
    virtual class Scripting::Result<bool>
    transferItemV010(int, int, class ScriptModuleMinecraft::ScriptContainer&) const;

    // vIndex: 8
    virtual class Scripting::Result<void>
    moveItem(int, int, class ScriptModuleMinecraft::ScriptContainerWrapper&) const;

    // vIndex: 9
    virtual class Scripting::Result<bool>
    swapItemsV010(int slot, int, class ScriptModuleMinecraft::ScriptContainer&) const;

    // vIndex: 10
    virtual class Scripting::Result<void>
    swapItems(int slot, int, class ScriptModuleMinecraft::ScriptContainerWrapper&) const;

    // vIndex: 11
    virtual class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptContainerSlot>>
    getSlot(int slot) const;

    // vIndex: 12
    virtual class Scripting::Result<void> clearAll() const;

    // vIndex: 13
    virtual class Container* _tryGetContainer() const = 0;

    // vIndex: 14
    virtual class ItemContext _getItemContext(int slot) const = 0;

    MCAPI explicit ScriptContainer(class Scripting::WeakLifetimeScope const& scope);

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>>
    addItem(class ScriptModuleMinecraft::ScriptItemStack const&) const;

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>>
    transferItem(int, class ScriptModuleMinecraft::ScriptContainerWrapper&) const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI static std::optional<struct Scripting::Error> _isSlotInvalid(class Container& container, int slot);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
