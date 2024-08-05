#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

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
    MCAPI explicit ScriptContainerWrapper(std::unique_ptr<class ScriptModuleMinecraft::ScriptContainer>);

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>>
    addItem(class ScriptModuleMinecraft::ScriptItemStack const&) const;

    MCAPI class Scripting::Result<void> clearAll() const;

    MCAPI class Scripting::Result<int> getEmptySlotsCount() const;

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>>
    getItem(int slot) const;

    MCAPI class Scripting::Result<int> getSize() const;

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptContainerSlot>>
    getSlot(int slot) const;

    MCAPI class Scripting::Result<void> moveItem(int, int, class ScriptModuleMinecraft::ScriptContainerWrapper&) const;

    MCAPI class Scripting::Result<void>
    setItem(int slot, std::optional<class ScriptModuleMinecraft::ScriptItemStack> const&) const;

    MCAPI class Scripting::Result<void>
    swapItems(int slot, int, class ScriptModuleMinecraft::ScriptContainerWrapper&) const;

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>>
    transferItem(int, class ScriptModuleMinecraft::ScriptContainerWrapper&) const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
