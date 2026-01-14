#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110 {

struct ItemCategory {
public:
    // ItemCategory inner types define
    enum class CreativeItemCategory : uchar {
        All             = 0,
        Construction    = 1,
        Nature          = 2,
        Equipment       = 3,
        Items           = 4,
        ItemCommandOnly = 5,
        Undefined       = 6,
        Count           = 7,
    };

    enum class CreativeItemCategoryStringError : uchar {
        EmptyString = 0,
        NotFound    = 1,
    };

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindCreativeItemCategoryType(::cereal::ReflectionCtx& ctx);

    MCAPI static ::nonstd::expected<
        ::SharedTypes::v1_21_110::ItemCategory::CreativeItemCategory,
        ::SharedTypes::v1_21_110::ItemCategory::CreativeItemCategoryStringError>
    creativeItemCategoryFromString(::std::string_view str);

    MCAPI static ::std::string
    stringFromCreativeItemCategory(::SharedTypes::v1_21_110::ItemCategory::CreativeItemCategory category);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::initializer_list<::SharedTypes::v1_21_110::ItemCategory::CreativeItemCategory> const&
    CREATIVE_ITEM_CATEGORY_MAPPING();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110
