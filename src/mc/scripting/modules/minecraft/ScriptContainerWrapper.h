#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
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
    ::ll::UntypedStorage<8, 8> mUnka2b074;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptContainerWrapper& operator=(ScriptContainerWrapper const&);
    ScriptContainerWrapper(ScriptContainerWrapper const&);
    ScriptContainerWrapper();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>,
        ::ScriptModuleMinecraft::ScriptContainerRulesError,
        ::Scripting::Error>
    addItem(::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack) const;

    MCNAPI ::Scripting::Result_deprecated<void> clearAll() const;

    MCNAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidContainerError>
    contains(::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack) const;

    MCNAPI ::Scripting::Result<::std::optional<int>, ::ScriptModuleMinecraft::ScriptInvalidContainerError>
    find(::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack) const;

    MCNAPI ::Scripting::Result<::std::optional<int>, ::ScriptModuleMinecraft::ScriptInvalidContainerError>
    findLast(::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack) const;

    MCNAPI ::Scripting::Result<::std::optional<int>, ::ScriptModuleMinecraft::ScriptInvalidContainerError>
    firstEmptySlot() const;

    MCNAPI ::Scripting::Result<::std::optional<int>, ::ScriptModuleMinecraft::ScriptInvalidContainerError>
    firstItem() const;

    MCNAPI ::Scripting::Result_deprecated<int> getEmptySlotsCount() const;

    MCNAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
    getItem(int slot) const;

    MCNAPI ::Scripting::Result_deprecated<int> getSize() const;

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptContainerSlot>>
    getSlot(int slot);

    MCNAPI ::Scripting::Result<int, ::ScriptModuleMinecraft::ScriptInvalidContainerError> getWeight() const;

    MCNAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptContainerRulesError, ::Scripting::Error>
    moveItem(int fromSlot, int toSlot, ::ScriptModuleMinecraft::ScriptContainerWrapper& toScriptContainer) const;

    MCNAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptContainerRulesError, ::Scripting::Error>
    setItem(int slot, ::std::optional<::ScriptModuleMinecraft::ScriptItemStack> const& scriptItemStack) const;

    MCNAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptContainerRulesError, ::Scripting::Error>
    swapItems(int slot, int otherSlot, ::ScriptModuleMinecraft::ScriptContainerWrapper& otherScriptContainer) const;

    MCNAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>,
        ::ScriptModuleMinecraft::ScriptContainerRulesError,
        ::Scripting::Error>
    transferItem(int fromSlot, ::ScriptModuleMinecraft::ScriptContainerWrapper& toScriptContainer) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
