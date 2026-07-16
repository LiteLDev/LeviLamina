#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class IClientInstance;
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
namespace Social { class IUserManager; }
// clang-format on

namespace OreUI {

class DeviceNetworkQuery : public ::OreUI::QueryBase<::OreUI::DeviceNetworkQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::IClientInstance>>      mClient;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::AppPlatform>>          mAppPlatform;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::Social::IUserManager>> mUserManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                 mAllowCellularToken;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                 mMobileDataOnceToken;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                 mMobileDataModalToken;
    ::ll::TypedStorage<8, 8, uint64>                                           mFrameCount;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                        mIsOnline;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                        mCellularDataFee;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                        mOnlyCellularAvailable;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                        mSupportsManualAddedServers;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                        mIsLANAllowed;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                        mIsAdHocModeActive;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>                         mDefaultNetworkMaxPlayers;
    // NOLINTEND

public:
    // prevent constructor by default
    DeviceNetworkQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void update(double const) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DeviceNetworkQuery(::OreUI::ClientDependencies const& client, ::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client, ::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
