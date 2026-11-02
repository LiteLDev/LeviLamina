#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/IntRange.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_60 {

struct EconomyTradeableComponentDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>          mDisplayName;
    ::ll::TypedStorage<8, 32, ::std::string>          mTradeTablePath;
    ::ll::TypedStorage<1, 1, bool>                    mUseNewTradeScreen;
    ::ll::TypedStorage<4, 4, int>                     mHeroDemandDiscount;
    ::ll::TypedStorage<4, 8, ::SharedTypes::IntRange> mCuredDiscount;
    ::ll::TypedStorage<4, 8, ::SharedTypes::IntRange> mMaxCuredDiscount;
    ::ll::TypedStorage<4, 4, int>                     mNearbyCuredDiscount;
    ::ll::TypedStorage<4, 4, int>                     mMaxNearbyCuredDiscount;
    ::ll::TypedStorage<1, 1, bool>                    mPersistTrades;
    ::ll::TypedStorage<1, 1, bool>                    mConvertTradesEconomy;
    ::ll::TypedStorage<1, 1, bool>                    mShowTradeScreen;
    ::ll::TypedStorage<1, 1, bool>                    mUseLegacyPrices;
    // NOLINTEND

public:
    // prevent constructor by default
    EconomyTradeableComponentDefinition& operator=(EconomyTradeableComponentDefinition const&);
    EconomyTradeableComponentDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EconomyTradeableComponentDefinition(::SharedTypes::v1_26_60::EconomyTradeableComponentDefinition const&);

    MCNAPI ::SharedTypes::v1_26_60::EconomyTradeableComponentDefinition&
    operator=(::SharedTypes::v1_26_60::EconomyTradeableComponentDefinition&&);

    MCNAPI bool operator==(::SharedTypes::v1_26_60::EconomyTradeableComponentDefinition const&) const;

    MCNAPI ~EconomyTradeableComponentDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_26_60::EconomyTradeableComponentDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_60
