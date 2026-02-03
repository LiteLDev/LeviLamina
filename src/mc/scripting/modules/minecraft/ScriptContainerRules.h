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
    MCAPI ::std::vector<::std::string> _getAllowedItems() const;

    MCAPI ::std::vector<::std::string> _getBannedItems() const;

    MCAPI ~ScriptContainerRules();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
