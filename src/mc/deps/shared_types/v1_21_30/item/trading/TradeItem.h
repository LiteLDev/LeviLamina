#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/Value.h"
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class DynamicValue; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_30 {

struct TradeItem {
public:
    // TradeItem inner types declare
    // clang-format off
    struct Quantity;
    // clang-format on

    // TradeItem inner types define
    struct Quantity {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint> mMin;
        ::ll::TypedStorage<4, 4, uint> mMax;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::SharedTypes::v1_21_30::TradeItem::Quantity> mQuantity;
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<10>>                mItem;
    ::ll::TypedStorage<8, 24, ::std::vector<::cereal::DynamicValue>>       mFunctions;
    ::ll::TypedStorage<8, 328, ::SharedTypes::v1_21_20::FilterGroupData>   mFilters;
    ::ll::TypedStorage<4, 4, float>                                        mPriceMultiplier;
    ::ll::TypedStorage<8, 16, ::Json::Value>                               mLegacyFunctions;
    ::ll::TypedStorage<8, 16, ::Json::Value>                               mLegacyFilters;
    // NOLINTEND

public:
    // prevent constructor by default
    TradeItem(TradeItem const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TradeItem();

    MCAPI ::SharedTypes::v1_21_30::TradeItem& operator=(::SharedTypes::v1_21_30::TradeItem&&);

    MCAPI ::SharedTypes::v1_21_30::TradeItem& operator=(::SharedTypes::v1_21_30::TradeItem const&);

    MCAPI ~TradeItem();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& DEPRECATED_FILTERS_FIELD();

    MCAPI static ::std::string_view const& DEPRECATED_FUNCTIONS_FIELD();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_30
