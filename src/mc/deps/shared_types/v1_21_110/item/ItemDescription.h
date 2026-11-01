#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/Identifier.h"
#include "mc/deps/shared_types/v1_21_110/item/ItemMenuCategory.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110 {

struct ItemDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::Identifier<10>>              mIdentifier;
    ::ll::TypedStorage<8, 56, ::SharedTypes::v1_21_110::ItemMenuCategory> mCategory;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemDescription(ItemDescription const&);
    ItemDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_110::ItemDescription& operator=(::SharedTypes::v1_21_110::ItemDescription const&);

    MCNAPI bool operator==(::SharedTypes::v1_21_110::ItemDescription const&) const;

    MCNAPI ~ItemDescription();
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

} // namespace SharedTypes::v1_21_110
