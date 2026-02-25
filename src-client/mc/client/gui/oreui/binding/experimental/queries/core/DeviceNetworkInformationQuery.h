#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/QueryBase.h"
#include "mc/client/gui/oreui/binding/experimental/properties/ObservableValue.h"
#include "mc/client/gui/oreui/binding/experimental/properties/Property.h"
#include "mc/client/gui/oreui/binding/experimental/properties/PropertyVector.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class IClientInstance;
namespace Social { class IUserManager; }
// clang-format on

namespace OreUI::Experimental {

class DeviceNetworkInformationQuery
: public ::OreUI::Experimental::QueryBase<::OreUI::Experimental::DeviceNetworkInformationQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::IClientInstance>>            mClient;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::AppPlatform>>                mAppPlatform;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::Social::IUserManager>>       mUserManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mAllowCellularToken;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mMobileDataOnceToken;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mMobileDataModalToken;
    ::ll::TypedStorage<8, 24, ::std::vector<::Social::MultiplayerServiceIdentifier>> mActiveServices;
    ::ll::TypedStorage<8, 8, uint64>                                                 mFrameCount;
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<bool>>                mIsOnline;
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<bool>>                mCellularDataFee;
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<bool>>                mOnlyCellularAvailable;
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<bool>>                mSupportsManualAddedServers;
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<bool>>                mIsLANAllowed;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::Experimental::PropertyVector<
            ::Social::MultiplayerServiceIdentifier,
            ::std::allocator<::OreUI::Experimental::Detail::ObservableValue<::Social::MultiplayerServiceIdentifier>>>>
        mServices;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void update(double const timestampMs) /*override*/;

    virtual ~DeviceNetworkInformationQuery() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI::Experimental
