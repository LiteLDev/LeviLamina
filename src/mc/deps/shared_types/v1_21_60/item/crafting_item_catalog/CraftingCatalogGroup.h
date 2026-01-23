#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_60/item/crafting_item_catalog/CraftingCatalogGroupIdentifier.h"
#include "mc/deps/shared_types/v1_21_60/item/crafting_item_catalog/CraftingCatalogItem.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_60 {

struct CraftingCatalogGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::std::optional<::SharedTypes::v1_21_60::CraftingCatalogGroupIdentifier>>
                                                                                           mGroupIdentifier;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_60::CraftingCatalogItem>> mItems;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftingCatalogGroup& operator=(CraftingCatalogGroup const&);
    CraftingCatalogGroup(CraftingCatalogGroup const&);
    CraftingCatalogGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_60::CraftingCatalogGroup& operator=(::SharedTypes::v1_21_60::CraftingCatalogGroup&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60
