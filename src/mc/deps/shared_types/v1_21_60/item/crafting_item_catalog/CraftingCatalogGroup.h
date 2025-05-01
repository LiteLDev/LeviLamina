#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    CraftingCatalogGroup& operator=(CraftingCatalogGroup const&);
    CraftingCatalogGroup(CraftingCatalogGroup const&);
    CraftingCatalogGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_60::CraftingCatalogGroup& operator=(::SharedTypes::v1_21_60::CraftingCatalogGroup&&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60
