#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_60/item/crafting_item_catalog/CraftingCatalogItem.h"

namespace SharedTypes::v1_21_60 {

struct CraftingCatalogGroupIdentifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                                 mName;
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::v1_21_60::CraftingCatalogItem>> mItemIcon;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftingCatalogGroupIdentifier(CraftingCatalogGroupIdentifier const&);
    CraftingCatalogGroupIdentifier();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v1_21_60::CraftingCatalogGroupIdentifier&
    operator=(::SharedTypes::v1_21_60::CraftingCatalogGroupIdentifier const&);

    MCAPI ~CraftingCatalogGroupIdentifier();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60
