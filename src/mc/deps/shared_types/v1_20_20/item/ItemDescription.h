#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/Identifier.h"
#include "mc/deps/shared_types/v1_20_20/item/ItemMenuCategory.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_20 {

struct ItemDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::Identifier<10>>                              mIdentifier;
    ::ll::TypedStorage<8, 64, ::std::optional<::SharedTypes::v1_20_20::ItemMenuCategory>> mCategory;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemDescription(::SharedTypes::v1_20_20::ItemDescription const&);

    MCAPI ::SharedTypes::v1_20_20::ItemDescription& operator=(::SharedTypes::v1_20_20::ItemDescription const&);

    MCAPI ~ItemDescription();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_20_20::ItemDescription const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_20
