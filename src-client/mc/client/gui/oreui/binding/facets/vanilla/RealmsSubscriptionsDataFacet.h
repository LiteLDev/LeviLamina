#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/realms/RealmsSubscriptionsState.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct RealmsSubscriptionInfo; }
namespace Realms { struct RealmsSubscriptions; }
// clang-format on

namespace OreUI {

class RealmsSubscriptionsDataFacet : public ::OreUI::FacetBase<::OreUI::RealmsSubscriptionsDataFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsSubscriptions>> mRealmsSubscriptions;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsSubscriptionsState>                mState;
    ::ll::TypedStorage<1, 1, bool>                                              mCanBuyPlusRealm;
    ::ll::TypedStorage<1, 1, bool>                                              mCanBuyCoreRealm;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mClientStoreId;
    ::ll::TypedStorage<1, 1, bool>                                              mIsDirty;
    ::ll::TypedStorage<8, 24, ::std::vector<::Realms::RealmsSubscriptionInfo>>  mRealmsSubscriptionInfo;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                  mStateChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsSubscriptionsDataFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsSubscriptionsDataFacet() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsSubscriptionsDataFacet(::std::shared_ptr<::Realms::RealmsSubscriptions> realmsSubscriptions);

    MCAPI bool getCanBuyCoreRealm() const;

    MCAPI bool getCanBuyPlusRealm() const;

    MCFOLD ::std::string const& getClientStoreId() const;

    MCFOLD ::std::vector<::Realms::RealmsSubscriptionInfo> const& getRealmsSubscriptionInfo() const;

    MCFOLD ::Realms::RealmsSubscriptionsState getState() const;

    MCAPI void setFacetDirty(::Realms::RealmsSubscriptionsState realmsSubscriptionsState);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::Realms::RealmsSubscriptions> realmsSubscriptions);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
