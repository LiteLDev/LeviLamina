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
namespace ScriptModuleMinecraft { class ScriptContainerRules; }
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
    // prevent constructor by default
    ScriptContainerWrapper();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptContainerWrapper(::std::unique_ptr<::ScriptModuleMinecraft::ScriptContainer> scriptContainer);

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

    MCAPI ::std::optional<::ScriptModuleMinecraft::ScriptContainerRules> const& getContainerRules() const;

    MCAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
    getItem(int slot) const;

    MCAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptContainerSlot>>
    getSlot(int slot);

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

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::unique_ptr<::ScriptModuleMinecraft::ScriptContainer> scriptContainer);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
