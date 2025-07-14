#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class Container;
class ItemContext;
namespace ScriptModuleMinecraft { class ScriptContainerSlot; }
namespace ScriptModuleMinecraft { class ScriptContainerWrapper; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { struct ScriptContainerRulesError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnk4b2c18;
    ::ll::UntypedStorage<8, 16> mUnk7559db;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptContainer& operator=(ScriptContainer const&);
    ScriptContainer(ScriptContainer const&);
    ScriptContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptContainer();

    // vIndex: 1
    virtual ::Scripting::Result_deprecated<int> getSize() const;

    // vIndex: 2
    virtual ::Scripting::Result_deprecated<int> getEmptySlotsCount() const;

    // vIndex: 3
    virtual ::Scripting::Result_deprecated<void>
    setItemV010(int slot, ::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack) const;

    // vIndex: 4
    virtual ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptContainerRulesError, ::Scripting::Error>
    setItem(int slot, ::std::optional<::ScriptModuleMinecraft::ScriptItemStack> const& scriptItemStack) const;

    // vIndex: 5
    virtual ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
    getItem(int slot) const;

    // vIndex: 6
    virtual ::Scripting::Result_deprecated<void>
    addItemV010(::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack) const;

    // vIndex: 7
    virtual ::Scripting::Result_deprecated<bool>
    transferItemV010(int fromSlot, int toSlot, ::ScriptModuleMinecraft::ScriptContainer& toScriptContainer) const;

    // vIndex: 8
    virtual ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptContainerRulesError, ::Scripting::Error>
    moveItem(int fromSlot, int toSlot, ::ScriptModuleMinecraft::ScriptContainerWrapper& toScriptContainer) const;

    // vIndex: 9
    virtual ::Scripting::Result_deprecated<bool>
    swapItemsV010(int slot, int otherSlot, ::ScriptModuleMinecraft::ScriptContainer& otherScriptContainer) const;

    // vIndex: 10
    virtual ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptContainerRulesError, ::Scripting::Error>
    swapItems(int slot, int otherSlot, ::ScriptModuleMinecraft::ScriptContainerWrapper& otherScriptContainer) const;

    // vIndex: 11
    virtual ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptContainerSlot>>
    getSlot(
        int slot,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptContainerWrapper>
            scriptContainerWrapperHandle
    );

    // vIndex: 12
    virtual ::Scripting::Result_deprecated<void> clearAll() const;

    // vIndex: 13
    virtual ::Container* _tryGetContainer() const = 0;

    // vIndex: 14
    virtual ::ItemContext _getItemContext(int) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>,
        ::ScriptModuleMinecraft::ScriptContainerRulesError,
        ::Scripting::Error>
    addItem(::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack) const;

    MCNAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>,
        ::ScriptModuleMinecraft::ScriptContainerRulesError,
        ::Scripting::Error>
    transferItem(int fromSlot, ::ScriptModuleMinecraft::ScriptContainerWrapper& toScriptContainer) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::Scripting::Error> _isSlotInvalid(::Container& container, int slot);

    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<int> $getSize() const;

    MCNAPI ::Scripting::Result_deprecated<int> $getEmptySlotsCount() const;

    MCNAPI ::Scripting::Result_deprecated<void>
    $setItemV010(int slot, ::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack) const;

    MCNAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptContainerRulesError, ::Scripting::Error>
    $setItem(int slot, ::std::optional<::ScriptModuleMinecraft::ScriptItemStack> const& scriptItemStack) const;

    MCNAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
    $getItem(int slot) const;

    MCNAPI ::Scripting::Result_deprecated<void>
    $addItemV010(::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack) const;

    MCNAPI ::Scripting::Result_deprecated<bool>
    $transferItemV010(int fromSlot, int toSlot, ::ScriptModuleMinecraft::ScriptContainer& toScriptContainer) const;

    MCNAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptContainerRulesError, ::Scripting::Error>
    $moveItem(int fromSlot, int toSlot, ::ScriptModuleMinecraft::ScriptContainerWrapper& toScriptContainer) const;

    MCNAPI ::Scripting::Result_deprecated<bool>
    $swapItemsV010(int slot, int otherSlot, ::ScriptModuleMinecraft::ScriptContainer& otherScriptContainer) const;

    MCNAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptContainerRulesError, ::Scripting::Error>
    $swapItems(int slot, int otherSlot, ::ScriptModuleMinecraft::ScriptContainerWrapper& otherScriptContainer) const;

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptContainerSlot>>
    $getSlot(
        int slot,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptContainerWrapper>
            scriptContainerWrapperHandle
    );

    MCNAPI ::Scripting::Result_deprecated<void> $clearAll() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
