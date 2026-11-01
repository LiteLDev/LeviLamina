#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemDescriptor;
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
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::vector<::std::string> _getAllowedItems() const;

    MCNAPI ::std::vector<::std::string> _getBannedItems() const;

    MCNAPI void _setAllowedItems(::std::vector<::std::string> const& allowedItems);

    MCNAPI void _setBannedItems(::std::vector<::std::string> const& bannedItems);

    MCNAPI ~ScriptContainerRules();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
