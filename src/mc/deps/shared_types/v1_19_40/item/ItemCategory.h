#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_19_40 {

struct ItemCategory {
public:
    // ItemCategory inner types declare
    // clang-format off
    struct CREATIVE_ITEM_CATEGORY_MAPPING;
    // clang-format on

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

    struct CREATIVE_ITEM_CATEGORY_MAPPING {
    public:
        // static variables
        // NOLINTBEGIN
        MCAPI static ::std::initializer_list<::SharedTypes::v1_19_40::ItemCategory::CreativeItemCategory> const& $RT1();
        // NOLINTEND
    };

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindCreativeItemCategoryType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_19_40
