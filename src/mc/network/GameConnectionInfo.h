#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/NetworkID.h"
#include "mc/deps/raknet/RakNetGUID.h"
#include "mc/network/ConnectionType.h"
#include "mc/network/GatheringServerInfo.h"
#include "mc/network/ThirdPartyInfo.h"
#include "mc/network/services/signaling/player_messaging/NetworkID.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace Social {

class GameConnectionInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::Social::ConnectionType>      mType;
    ::ll::TypedStorage<8, 32, ::std::string>                mHostIpAddress;
    ::ll::TypedStorage<8, 32, ::std::string>                mUnresolvedUrl;
    ::ll::TypedStorage<8, 32, ::std::string>                mServerRegion;
    ::ll::TypedStorage<4, 4, int>                           mServiceQuality;
    ::ll::TypedStorage<4, 4, int>                           mPort;
    ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>         mRakNetGUID;
    ::ll::TypedStorage<8, 24, ::NetherNet::NetworkID>       mNetherNetId;
    ::ll::TypedStorage<8, 16, ::PlayerMessaging::NetworkID> mPlayerMessagingId;
    ::ll::TypedStorage<8, 200, ::ThirdPartyInfo>            mThirdPartyServerInfo;
    ::ll::TypedStorage<8, 96, ::GatheringServerInfo>        mGatheringServerInfo;
    ::ll::TypedStorage<1, 1, bool>                          mAllowSmallDownloads;
    // NOLINTEND

public:
    // prevent constructor by default
    GameConnectionInfo(GameConnectionInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GameConnectionInfo();

    MCAPI_C ::std::string getCorrelationId() const;

    MCAPI_C ::std::string const getRakNetGUID() const;

    MCAPI ::Social::GameConnectionInfo& operator=(::Social::GameConnectionInfo const&);

    MCAPI ~GameConnectionInfo();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static ::Social::GameConnectionInfo fromJson(::Json::Value const& properties);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI_C void* $ctor(::Social::GameConnectionInfo&&);

    MCAPI_C void* $ctor(::Social::GameConnectionInfo const&);

    MCAPI_C void* $ctor(::Social::ConnectionType connectionType, ::NetherNet::NetworkID const& netherNetId);

    MCAPI_C void* $ctor(::Social::ConnectionType connectionType, ::std::string const& ipAddress, int port);

    MCAPI_C void* $ctor(
        ::Social::ConnectionType            connectionType,
        ::NetherNet::NetworkID const&       netherNetId,
        ::PlayerMessaging::NetworkID const& playerMessagingId
    );

    MCAPI_C void* $ctor(
        ::Social::ConnectionType      connectionType,
        ::NetherNet::NetworkID const& netherNetId,
        ::GatheringServerInfo const&  serverInfo
    );

    MCAPI_C void* $ctor(
        ::Social::ConnectionType      connectionType,
        ::NetherNet::NetworkID const& netherNetId,
        ::ThirdPartyInfo const&       serverInfo
    );

    MCAPI_C void* $ctor(
        ::RakNet::SystemAddress      connection,
        ::RakNet::RakNetGUID const&  rakGuid,
        ::ThirdPartyInfo const&      serverInfo,
        ::GatheringServerInfo const& gatheringServerInfo
    );

    MCAPI_C void* $ctor(
        ::Social::ConnectionType     connectionType,
        ::std::string const&         ipAddress,
        int                          port,
        ::GatheringServerInfo const& serverInfo
    );

    MCAPI_C void* $ctor(
        ::Social::ConnectionType connectionType,
        ::std::string const&     ipAddress,
        int                      port,
        ::ThirdPartyInfo const&  serverInfo
    );

    MCAPI_C void* $ctor(
        ::Social::ConnectionType      connectionType,
        ::NetherNet::NetworkID const& netherNetId,
        ::std::string&                serverRegion,
        int                           serviceQuality
    );

    MCAPI_C void* $ctor(
        ::Social::ConnectionType connectionType,
        ::std::string const&     ipAddress,
        int                      port,
        ::std::string&           serverRegion,
        int                      serviceQuality
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Social
