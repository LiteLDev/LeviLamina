#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/store/iap/RealmsOfferTier.h"
#include "mc/client/store/iap/RealmsPurchaseIntent.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct World; }
// clang-format on

class RealmsCreateParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::RealmsPurchaseIntent const>             mPurchaseIntent;
    ::ll::TypedStorage<8, 32, ::std::string const>                     mWorldName;
    ::ll::TypedStorage<8, 32, ::std::string const>                     mSubscriptionId;
    ::ll::TypedStorage<4, 4, ::RealmsOfferTier const>                  mOfferTier;
    ::ll::TypedStorage<1, 1, bool const>                               mExpired;
    ::ll::TypedStorage<1, 1, bool const>                               mTrialAvailable;
    ::ll::TypedStorage<1, 1, bool const>                               mHasClub;
    ::ll::TypedStorage<1, 1, bool const>                               mIsRealmsPDP;
    ::ll::TypedStorage<8, 64, ::std::function<void(::Realms::World&)>> mOnCreateCallback;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~RealmsCreateParams();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
