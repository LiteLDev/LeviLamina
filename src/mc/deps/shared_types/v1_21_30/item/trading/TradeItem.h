#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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
        ::ll::UntypedStorage<4, 4> mUnkc9b79c;
        ::ll::UntypedStorage<4, 4> mUnk9093d0;
        // NOLINTEND

    public:
        // prevent constructor by default
        Quantity& operator=(Quantity const&);
        Quantity(Quantity const&);
        Quantity();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>   mUnk8037a3;
    ::ll::UntypedStorage<8, 32>  mUnkc3e488;
    ::ll::UntypedStorage<8, 24>  mUnk59ce09;
    ::ll::UntypedStorage<8, 328> mUnk2aa4f8;
    ::ll::UntypedStorage<4, 4>   mUnk8f1205;
    ::ll::UntypedStorage<8, 16>  mUnk78fb7d;
    ::ll::UntypedStorage<8, 16>  mUnk22212b;
    // NOLINTEND

public:
    // prevent constructor by default
    TradeItem(TradeItem const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TradeItem();

    MCAPI TradeItem(::SharedTypes::v1_21_30::TradeItem&&);

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

    MCAPI void* $ctor(::SharedTypes::v1_21_30::TradeItem&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_30
