#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_19_40 {

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
    MCNAPI static void bindCreativeItemCategoryType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::initializer_list<::SharedTypes::v1_19_40::ItemCategory::CreativeItemCategory> const&
    CREATIVE_ITEM_CATEGORY_MAPPING();
    // NOLINTEND
};

} // namespace SharedTypes::v1_19_40
