#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_60 {

struct CraftingCatalogItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk98977b;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftingCatalogItem& operator=(CraftingCatalogItem const&);
    CraftingCatalogItem(CraftingCatalogItem const&);
    CraftingCatalogItem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_60::CraftingCatalogItem& operator=(::SharedTypes::v1_21_60::CraftingCatalogItem&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60
