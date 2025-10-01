#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_60 {

struct CraftingCatalogGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnkffa951;
    ::ll::UntypedStorage<8, 24> mUnk6275c5;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftingCatalogGroup(CraftingCatalogGroup const&);
    CraftingCatalogGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_60::CraftingCatalogGroup&
    operator=(::SharedTypes::v1_21_60::CraftingCatalogGroup const&);

    MCNAPI ::SharedTypes::v1_21_60::CraftingCatalogGroup& operator=(::SharedTypes::v1_21_60::CraftingCatalogGroup&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60
