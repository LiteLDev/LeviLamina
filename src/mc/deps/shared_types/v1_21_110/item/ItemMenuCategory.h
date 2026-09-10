#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_110/item/ItemCategory.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_60 { struct ItemMenuCategory; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110 {

struct ItemMenuCategory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_21_110::ItemCategory::CreativeItemCategory> mCreativeCategory;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                              mCreativeGroupName;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                        mIsHiddenInCommands;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static void
    upgrade(::SharedTypes::v1_21_60::ItemMenuCategory& oldData, ::SharedTypes::v1_21_110::ItemMenuCategory& newData);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110
