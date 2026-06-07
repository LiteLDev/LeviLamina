#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_19_40/item/ItemCategory.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_20 {

struct ItemMenuCategory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 2, ::std::optional<::SharedTypes::v1_19_40::ItemCategory::CreativeItemCategory>>
                                                              mCreativeCategory;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mCreativeGroupName;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>           mIsHiddenInCommands;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static void upgrade(
        ::std::optional<::SharedTypes::v1_19_40::ItemCategory::CreativeItemCategory>& oldData,
        ::std::optional<::SharedTypes::v1_20_20::ItemMenuCategory>&                   newData
    );
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_20
