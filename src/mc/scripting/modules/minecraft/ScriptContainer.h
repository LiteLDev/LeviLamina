#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"

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
    setItemV010(int slot, class ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack) const;

    // vIndex: 4
    virtual class Scripting::Result<void>
    setItem(int slot, std::optional<class ScriptModuleMinecraft::ScriptItemStack> const& scriptItemStack) const;

    // vIndex: 5
    virtual class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>>
    getItem(int slot) const;

    // vIndex: 6
    virtual class Scripting::Result<void>
    addItemV010(class ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack) const;

    // vIndex: 7
    virtual class Scripting::Result<bool>
    transferItemV010(int fromSlot, int toSlot, class ScriptModuleMinecraft::ScriptContainer& toScriptContainer) const;

    // vIndex: 8
    virtual class Scripting::Result<void>
    moveItem(int fromSlot, int toSlot, class ScriptModuleMinecraft::ScriptContainerWrapper& toScriptContainer) const;

    // vIndex: 9
    virtual class Scripting::Result<bool>
    swapItemsV010(int slot, int otherSlot, class ScriptModuleMinecraft::ScriptContainer& otherScriptContainer) const;

    // vIndex: 10
    virtual class Scripting::Result<void>
    swapItems(int slot, int otherSlot, class ScriptModuleMinecraft::ScriptContainerWrapper& otherScriptContainer) const;

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
    addItem(class ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack) const;

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>>
    transferItem(int fromSlot, class ScriptModuleMinecraft::ScriptContainerWrapper& toScriptContainer) const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI static std::optional<struct Scripting::Error> _isSlotInvalid(class Container& container, int slot);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class Scripting::WeakLifetimeScope const& scope);

    MCAPI class Scripting::Result<void> addItemV010$(class ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack
    ) const;

    MCAPI class Scripting::Result<void> clearAll$() const;

    MCAPI class Scripting::Result<int> getEmptySlotsCount$() const;

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>>
    getItem$(int slot) const;

    MCAPI class Scripting::Result<int> getSize$() const;

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptContainerSlot>>
    getSlot$(int slot) const;

    MCAPI class Scripting::Result<void>
    moveItem$(int fromSlot, int toSlot, class ScriptModuleMinecraft::ScriptContainerWrapper& toScriptContainer) const;

    MCAPI class Scripting::Result<void>
    setItem$(int slot, std::optional<class ScriptModuleMinecraft::ScriptItemStack> const& scriptItemStack) const;

    MCAPI class Scripting::Result<void>
    setItemV010$(int slot, class ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack) const;

    MCAPI class Scripting::Result<void>
    swapItems$(int slot, int otherSlot, class ScriptModuleMinecraft::ScriptContainerWrapper& otherScriptContainer)
        const;

    MCAPI class Scripting::Result<bool>
    swapItemsV010$(int slot, int otherSlot, class ScriptModuleMinecraft::ScriptContainer& otherScriptContainer) const;

    MCAPI class Scripting::Result<bool>
    transferItemV010$(int fromSlot, int toSlot, class ScriptModuleMinecraft::ScriptContainer& toScriptContainer) const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
