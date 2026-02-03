#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptContainer; }
namespace ScriptModuleMinecraft { class ScriptContainerSlot; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { struct ScriptContainerRulesError; }
namespace ScriptModuleMinecraft { struct ScriptInvalidContainerError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptContainerWrapper : public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptContainerWrapper> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::ScriptContainer>> mContainer;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>,
        ::ScriptModuleMinecraft::ScriptContainerRulesError,
        ::Scripting::Error>
    addItem(::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack) const;

    MCAPI ::Scripting::Result_deprecated<void> clearAll() const;

    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidContainerError>
    contains(::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack) const;

    MCAPI ::Scripting::Result<::std::optional<int>, ::ScriptModuleMinecraft::ScriptInvalidContainerError>
    find(::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack) const;

    MCAPI ::Scripting::Result<::std::optional<int>, ::ScriptModuleMinecraft::ScriptInvalidContainerError>
    findLast(::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack) const;

    MCAPI ::Scripting::Result<::std::optional<int>, ::ScriptModuleMinecraft::ScriptInvalidContainerError>
    firstEmptySlot() const;

    MCAPI ::Scripting::Result<::std::optional<int>, ::ScriptModuleMinecraft::ScriptInvalidContainerError>
    firstItem() const;

    MCAPI ::Scripting::Result_deprecated<int> getEmptySlotsCount() const;

    MCAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
    getItem(int slot) const;

    MCAPI ::Scripting::Result_deprecated<int> getSize() const;

    MCAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptContainerSlot>>
    getSlot(int slot);

    MCAPI ::Scripting::Result<int, ::ScriptModuleMinecraft::ScriptInvalidContainerError> getWeight() const;

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptContainerRulesError, ::Scripting::Error>
    moveItem(int fromSlot, int toSlot, ::ScriptModuleMinecraft::ScriptContainerWrapper& toScriptContainer) const;

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptContainerRulesError, ::Scripting::Error>
    setItem(int slot, ::std::optional<::ScriptModuleMinecraft::ScriptItemStack> const& scriptItemStack) const;

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptContainerRulesError, ::Scripting::Error>
    swapItems(int slot, int otherSlot, ::ScriptModuleMinecraft::ScriptContainerWrapper& otherScriptContainer) const;

    MCAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>,
        ::ScriptModuleMinecraft::ScriptContainerRulesError,
        ::Scripting::Error>
    transferItem(int fromSlot, ::ScriptModuleMinecraft::ScriptContainerWrapper& toScriptContainer) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
