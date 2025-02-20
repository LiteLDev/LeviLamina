#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptContainerSlot; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptContainerWrapper {
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
    MCAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
    addItem(::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack) const;

    MCAPI ::Scripting::Result<void> clearAll() const;

    MCAPI ::Scripting::Result_deprecated<int> getEmptySlotsCount() const;

    MCAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
    getItem(int slot) const;

    MCAPI ::Scripting::Result_deprecated<int> getSize() const;

    MCAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptContainerSlot>>
    getSlot(int slot) const;

    MCAPI ::Scripting::Result<void>
    moveItem(int fromSlot, int toSlot, ::ScriptModuleMinecraft::ScriptContainerWrapper& toScriptContainer) const;

    MCAPI ::Scripting::Result<void>
    setItem(int slot, ::std::optional<::ScriptModuleMinecraft::ScriptItemStack> const& scriptItemStack) const;

    MCAPI ::Scripting::Result<void>
    swapItems(int slot, int otherSlot, ::ScriptModuleMinecraft::ScriptContainerWrapper& otherScriptContainer) const;

    MCAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
    transferItem(int fromSlot, ::ScriptModuleMinecraft::ScriptContainerWrapper& toScriptContainer) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptContainerWrapper> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
