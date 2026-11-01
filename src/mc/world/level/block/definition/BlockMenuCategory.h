#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_110/item/ItemCategory.h"

struct BlockMenuCategory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                               mCreativeGroupName;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_21_110::ItemCategory::CreativeItemCategory> mCreativeCategory;
    ::ll::TypedStorage<1, 1, bool>                                                         mIsHiddenInCommands;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BlockMenuCategory();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
