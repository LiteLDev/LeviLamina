#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_60/item/crafting_item_catalog/CraftingCatalogItemCategory.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_60 { struct CraftingCatalogGroup; }
// clang-format on

namespace SharedTypes::v1_21_60 {

struct CraftingCatalogCategory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_21_60::CraftingCatalogItemCategory>          mCategory;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_60::CraftingCatalogGroup>> mGroups;
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60
