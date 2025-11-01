#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_60 {

struct CraftingCatalogGroupIdentifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk2e83e3;
    ::ll::UntypedStorage<8, 40> mUnkecabb3;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftingCatalogGroupIdentifier(CraftingCatalogGroupIdentifier const&);
    CraftingCatalogGroupIdentifier();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_60::CraftingCatalogGroupIdentifier& operator=(::SharedTypes::v1_21_60::CraftingCatalogGroupIdentifier&&);

    MCNAPI ::SharedTypes::v1_21_60::CraftingCatalogGroupIdentifier& operator=(::SharedTypes::v1_21_60::CraftingCatalogGroupIdentifier const&);

    MCNAPI ~CraftingCatalogGroupIdentifier();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
