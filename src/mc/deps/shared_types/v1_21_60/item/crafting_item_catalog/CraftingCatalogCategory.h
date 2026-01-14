#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_60/item/crafting_item_catalog/CraftingCatalogItemCategory.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_60 { struct CraftingCatalogGroup; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_60 {

struct CraftingCatalogCategory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_21_60::CraftingCatalogItemCategory>          mCategory;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_60::CraftingCatalogGroup>> mGroups;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftingCatalogCategory& operator=(CraftingCatalogCategory const&);
    CraftingCatalogCategory(CraftingCatalogCategory const&);
    CraftingCatalogCategory();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_60::CraftingCatalogCategory&
    operator=(::SharedTypes::v1_21_60::CraftingCatalogCategory&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60
