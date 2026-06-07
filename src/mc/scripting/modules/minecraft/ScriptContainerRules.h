#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemDescriptor;
class StorageItemComponent;
class StorageWeightLimitItemComponent;
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptContainerRules {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                             mAllowNestedStorageItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>> mBannedItemsDescriptor;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>> mAllowedItemsDescriptor;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>             mWeightLimit;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptContainerRules& operator=(ScriptContainerRules const&);
    ScriptContainerRules(ScriptContainerRules const&);
    ScriptContainerRules();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptContainerRules(
        ::StorageItemComponent const&            storageItemComponent,
        ::StorageWeightLimitItemComponent const* storageWeightLimitItemComponent
    );

    MCAPI void _setAllowedItems(::std::vector<::std::string> const& allowedItems);

    MCAPI void _setBannedItems(::std::vector<::std::string> const& bannedItems);

    MCAPI ::ScriptModuleMinecraft::ScriptContainerRules& operator=(::ScriptModuleMinecraft::ScriptContainerRules&&);

    MCAPI ~ScriptContainerRules();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::StorageItemComponent const&            storageItemComponent,
        ::StorageWeightLimitItemComponent const* storageWeightLimitItemComponent
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
