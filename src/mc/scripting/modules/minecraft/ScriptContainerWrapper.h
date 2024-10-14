#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptContainer; }
namespace ScriptModuleMinecraft { class ScriptContainerSlot; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptContainerWrapper {
public:
    // prevent constructor by default
    ScriptContainerWrapper& operator=(ScriptContainerWrapper const&);
    ScriptContainerWrapper(ScriptContainerWrapper const&);
    ScriptContainerWrapper();

public:
    // NOLINTBEGIN
    MCAPI explicit ScriptContainerWrapper(std::unique_ptr<class ScriptModuleMinecraft::ScriptContainer> scriptContainer
    );

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>>
    addItem(class ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack) const;

    MCAPI class Scripting::Result<void> clearAll() const;

    MCAPI class Scripting::Result<int> getEmptySlotsCount() const;

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>>
    getItem(int slot) const;

    MCAPI class Scripting::Result<int> getSize() const;

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptContainerSlot>>
    getSlot(int slot) const;

    MCAPI class Scripting::Result<void>
    moveItem(int fromSlot, int toSlot, class ScriptModuleMinecraft::ScriptContainerWrapper& toScriptContainer) const;

    MCAPI class Scripting::Result<void>
    setItem(int slot, std::optional<class ScriptModuleMinecraft::ScriptItemStack> const& scriptItemStack) const;

    MCAPI class Scripting::Result<void>
    swapItems(int slot, int otherSlot, class ScriptModuleMinecraft::ScriptContainerWrapper& otherScriptContainer) const;

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>>
    transferItem(int fromSlot, class ScriptModuleMinecraft::ScriptContainerWrapper& toScriptContainer) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
