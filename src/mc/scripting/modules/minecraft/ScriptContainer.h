#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/ScriptContainerRules.h"

// auto generated forward declare list
// clang-format off
class Container;
class ItemContext;
namespace ScriptModuleMinecraft { class ScriptContainerSlot; }
namespace ScriptModuleMinecraft { class ScriptContainerWrapper; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { struct ScriptContainerRulesError; }
namespace ScriptModuleMinecraft { struct ScriptInvalidContainerError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::std::optional<::ScriptModuleMinecraft::ScriptContainerRules>> mContainerRules;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                                 mScope;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptContainer& operator=(ScriptContainer const&);
    ScriptContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptContainer();

    virtual ::Scripting::Result_deprecated<int> getSize() const;

    virtual ::Scripting::Result_deprecated<int> getEmptySlotsCount() const;

    virtual ::Scripting::Result_deprecated<void>
    setItemV010(int slot, ::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack) const;

    virtual ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptContainerRulesError, ::Scripting::Error>
    setItem(int slot, ::std::optional<::ScriptModuleMinecraft::ScriptItemStack> const& scriptItemStack) const;

    virtual ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
    getItem(int slot) const;

    virtual ::Scripting::Result_deprecated<void>
    addItemV010(::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack) const;

    virtual ::Scripting::Result_deprecated<bool>
    transferItemV010(int fromSlot, int toSlot, ::ScriptModuleMinecraft::ScriptContainer& toScriptContainer) const;

    virtual ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptContainerRulesError, ::Scripting::Error>
    moveItem(int fromSlot, int toSlot, ::ScriptModuleMinecraft::ScriptContainerWrapper& toScriptContainer) const;

    virtual ::Scripting::Result_deprecated<bool>
    swapItemsV010(int slot, int otherSlot, ::ScriptModuleMinecraft::ScriptContainer& otherScriptContainer) const;

    virtual ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptContainerRulesError, ::Scripting::Error>
    swapItems(int slot, int otherSlot, ::ScriptModuleMinecraft::ScriptContainerWrapper& otherScriptContainer) const;

    virtual ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptContainerSlot>>
    getSlot(
        int slot,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptContainerWrapper>
            scriptContainerWrapperHandle
    );

    virtual ::Scripting::Result_deprecated<void> clearAll() const;

    virtual ::Container* _tryGetContainer() const = 0;

    virtual ::ItemContext _getItemContext(int) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptContainer(::ScriptModuleMinecraft::ScriptContainer const&);

    MCAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>,
        ::ScriptModuleMinecraft::ScriptContainerRulesError,
        ::Scripting::Error>
    addItem(::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack) const;

    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidContainerError>
    contains(::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack) const;

    MCAPI ::Scripting::Result<int, ::ScriptModuleMinecraft::ScriptInvalidContainerError> getWeight() const;

    MCAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>,
        ::ScriptModuleMinecraft::ScriptContainerRulesError,
        ::Scripting::Error>
    transferItem(int fromSlot, ::ScriptModuleMinecraft::ScriptContainerWrapper& toScriptContainer) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::Scripting::Error> _isSlotInvalid(::Container& container, int slot);

    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptContainer const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::Result_deprecated<int> $getSize() const;

    MCAPI ::Scripting::Result_deprecated<int> $getEmptySlotsCount() const;

    MCAPI ::Scripting::Result_deprecated<void>
    $setItemV010(int slot, ::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack) const;

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptContainerRulesError, ::Scripting::Error>
    $setItem(int slot, ::std::optional<::ScriptModuleMinecraft::ScriptItemStack> const& scriptItemStack) const;

    MCAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
    $getItem(int slot) const;

    MCAPI ::Scripting::Result_deprecated<void>
    $addItemV010(::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack) const;

    MCAPI ::Scripting::Result_deprecated<bool>
    $transferItemV010(int fromSlot, int toSlot, ::ScriptModuleMinecraft::ScriptContainer& toScriptContainer) const;

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptContainerRulesError, ::Scripting::Error>
    $moveItem(int fromSlot, int toSlot, ::ScriptModuleMinecraft::ScriptContainerWrapper& toScriptContainer) const;

    MCAPI ::Scripting::Result_deprecated<bool>
    $swapItemsV010(int slot, int otherSlot, ::ScriptModuleMinecraft::ScriptContainer& otherScriptContainer) const;

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptContainerRulesError, ::Scripting::Error>
    $swapItems(int slot, int otherSlot, ::ScriptModuleMinecraft::ScriptContainerWrapper& otherScriptContainer) const;

    MCAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptContainerSlot>>
    $getSlot(
        int slot,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptContainerWrapper>
            scriptContainerWrapperHandle
    );

    MCAPI ::Scripting::Result_deprecated<void> $clearAll() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
