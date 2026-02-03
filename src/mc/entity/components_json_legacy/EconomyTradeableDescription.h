#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IntRange.h"
#include "mc/world/actor/ActorComponentDescription.h"

// auto generated forward declare list
// clang-format off
struct DeserializeDataParams;
// clang-format on

struct EconomyTradeableDescription : public ::ActorComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mDisplayName;
    ::ll::TypedStorage<8, 32, ::std::string> mTradeTablePath;
    ::ll::TypedStorage<1, 1, bool>           mUseNewTradeScreen;
    ::ll::TypedStorage<4, 4, int>            mHeroDemandDiscount;
    ::ll::TypedStorage<4, 8, ::IntRange>     mCuredDiscount;
    ::ll::TypedStorage<4, 8, ::IntRange>     mMaxCuredDiscount;
    ::ll::TypedStorage<4, 4, int>            mNearbyCuredDiscount;
    ::ll::TypedStorage<4, 4, int>            mMaxNearbyCuredDiscount;
    ::ll::TypedStorage<1, 1, bool>           mPersistTrades;
    ::ll::TypedStorage<1, 1, bool>           mConvertTradesEconomy;
    ::ll::TypedStorage<1, 1, bool>           mShowTradeScreen;
    ::ll::TypedStorage<1, 1, bool>           mUseLegacyPrices;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual char const* getJsonName() const /*override*/;

    virtual void deserializeData(::DeserializeDataParams deserializeDataParams) /*override*/;

    virtual ~EconomyTradeableDescription() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI char const* $getJsonName() const;

    MCAPI void $deserializeData(::DeserializeDataParams deserializeDataParams);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
