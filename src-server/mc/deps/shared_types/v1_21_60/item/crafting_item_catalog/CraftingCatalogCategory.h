#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_60 {

struct CraftingCatalogCategory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnka4f5d6;
    ::ll::UntypedStorage<8, 24> mUnk280005;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftingCatalogCategory& operator=(CraftingCatalogCategory const&);
    CraftingCatalogCategory(CraftingCatalogCategory const&);
    CraftingCatalogCategory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_60::CraftingCatalogCategory&
    operator=(::SharedTypes::v1_21_60::CraftingCatalogCategory&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60
