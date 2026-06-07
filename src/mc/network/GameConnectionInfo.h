#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/ServerSupportedAuthenticationTypes.h"
#include "mc/deps/nether_net/NetworkID.h"
#include "mc/deps/raknet/RakNetGUID.h"
#include "mc/network/ConnectionType.h"
#include "mc/network/GatheringServerInfo.h"
#include "mc/network/Nonce.h"
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
    ::ll::TypedStorage<2, 2, ::Social::ConnectionType>             mType;
    ::ll::TypedStorage<8, 32, ::std::string>                       mHostIpAddress;
    ::ll::TypedStorage<8, 32, ::std::string>                       mUnresolvedUrl;
    ::ll::TypedStorage<8, 32, ::std::string>                       mServerRegion;
    ::ll::TypedStorage<4, 4, int>                                  mServiceQuality;
    ::ll::TypedStorage<4, 4, int>                                  mPort;
    ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>                mRakNetGUID;
    ::ll::TypedStorage<8, 24, ::NetherNet::NetworkID>              mNetherNetId;
    ::ll::TypedStorage<8, 16, ::PlayerMessaging::NetworkID>        mPlayerMessagingId;
    ::ll::TypedStorage<1, 2, ::ServerSupportedAuthenticationTypes> mSupportedAuth;
    ::ll::TypedStorage<8, 200, ::ThirdPartyInfo>                   mThirdPartyServerInfo;
    ::ll::TypedStorage<8, 96, ::GatheringServerInfo>               mGatheringServerInfo;
    ::ll::TypedStorage<1, 1, bool>                                 mAllowSmallDownloads;
    ::ll::TypedStorage<1, 1, bool>                                 mDisableTrickleIce;
    ::ll::TypedStorage<8, 40, ::std::optional<::Social::Nonce>>    mNonce;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GameConnectionInfo();

#ifdef LL_PLAT_C
    MCAPI GameConnectionInfo(::Social::GameConnectionInfo&&);
#endif

    MCAPI GameConnectionInfo(::Social::GameConnectionInfo const&);

    MCAPI GameConnectionInfo(::Social::ConnectionType connectionType, ::NetherNet::NetworkID const& netherNetId);

    MCAPI GameConnectionInfo(::Social::ConnectionType connectionType, ::std::string const& ipAddress, int port);

#ifdef LL_PLAT_C
    MCAPI GameConnectionInfo(
        ::Social::ConnectionType            connectionType,
        ::NetherNet::NetworkID const&       netherNetId,
        ::PlayerMessaging::NetworkID const& playerMessagingId
    );

    MCAPI GameConnectionInfo(
        ::Social::ConnectionType      connectionType,
        ::NetherNet::NetworkID const& netherNetId,
        ::GatheringServerInfo const&  serverInfo
    );

    MCAPI GameConnectionInfo(
        ::Social::ConnectionType      connectionType,
        ::NetherNet::NetworkID const& netherNetId,
        ::ThirdPartyInfo const&       serverInfo
    );
#endif

    MCAPI GameConnectionInfo(
        ::RakNet::SystemAddress      connection,
        ::RakNet::RakNetGUID const&  rakGuid,
        ::ThirdPartyInfo const&      serverInfo,
        ::GatheringServerInfo const& gatheringServerInfo
    );

#ifdef LL_PLAT_C
    MCAPI GameConnectionInfo(
        ::Social::ConnectionType     connectionType,
        ::std::string const&         ipAddress,
        int                          port,
        ::GatheringServerInfo const& serverInfo
    );

    MCAPI GameConnectionInfo(
        ::Social::ConnectionType connectionType,
        ::std::string const&     ipAddress,
        int                      port,
        ::ThirdPartyInfo const&  serverInfo
    );

    MCAPI GameConnectionInfo(
        ::Social::ConnectionType            connectionType,
        ::NetherNet::NetworkID const&       netherNetId,
        ::PlayerMessaging::NetworkID const& playerMessagingId,
        ::ThirdPartyInfo const&             thirdPartyInfo
    );

    MCAPI GameConnectionInfo(
        ::Social::ConnectionType      connectionType,
        ::NetherNet::NetworkID const& netherNetId,
        ::std::string&                serverRegion,
        int                           serviceQuality
    );

    MCAPI GameConnectionInfo(
        ::Social::ConnectionType connectionType,
        ::std::string const&     ipAddress,
        int                      port,
        ::std::string&           serverRegion,
        int                      serviceQuality
    );

    MCAPI GameConnectionInfo(
        ::Social::ConnectionType            connectionType,
        ::std::string const&                ipAddress,
        int                                 port,
        ::RakNet::RakNetGUID const&         rakNetGUID,
        ::NetherNet::NetworkID const&       netherNetId,
        ::PlayerMessaging::NetworkID const& playerMessagingId
    );

    MCFOLD bool getAllowSmallDownloads() const;

    MCAPI ::std::string getCorrelationId() const;

    MCAPI ::std::string const& getCreatorName() const;

    MCFOLD bool getDisableTrickleIce() const;

    MCFOLD ::GatheringServerInfo const& getGatheringServerInfo() const;

    MCFOLD ::GatheringServerInfo& getGatheringServerInfo();
#endif

    MCFOLD ::std::string const& getHostIpAddress() const;

    MCFOLD ::NetherNet::NetworkID const& getNetherNetId() const;

#ifdef LL_PLAT_C
    MCFOLD ::std::optional<::Social::Nonce> const& getNonce() const;
#endif

    MCFOLD int getPort() const;

#ifdef LL_PLAT_C
    MCAPI ::std::string const getRakNetGUID() const;

    MCFOLD ::std::string const getServerRegionName() const;

    MCFOLD int getServerServiceQuality() const;

    MCAPI ::ServerSupportedAuthenticationTypes getSupportedAuth() const;
#endif

    MCFOLD ::ThirdPartyInfo const& getThirdPartyServerInfo() const;

#ifdef LL_PLAT_C
    MCFOLD ::ThirdPartyInfo& getThirdPartyServerInfo();
#endif

    MCFOLD ::Social::ConnectionType getType() const;

#ifdef LL_PLAT_C
    MCFOLD ::std::string const& getUnresolvedUrl() const;

    MCAPI ::Social::GameConnectionInfo& operator=(::Social::GameConnectionInfo&&);
#endif

    MCAPI ::Social::GameConnectionInfo& operator=(::Social::GameConnectionInfo const&);

#ifdef LL_PLAT_C
    MCAPI void setAllowSmallDownloads(bool allow);

    MCAPI void setDisableTrickleIce(bool value);

    MCAPI void setNonce(::Social::Nonce const& nonce);

    MCAPI void setRakNetGUID(::std::string const& rakNetGUIDStr);

    MCAPI void setSupportedAuth(::ServerSupportedAuthenticationTypes supportedAuth);
#endif

    MCFOLD void setUnresolvedUrl(::std::string const& url);

#ifdef LL_PLAT_C
    MCAPI void toJson(::Json::Value& connectionJson) const;
#endif

    MCAPI ~GameConnectionInfo();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::Social::GameConnectionInfo fromJson(::Json::Value const& properties);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

#ifdef LL_PLAT_C
    MCAPI void* $ctor(::Social::GameConnectionInfo&&);
#endif

    MCAPI void* $ctor(::Social::GameConnectionInfo const&);

    MCAPI void* $ctor(::Social::ConnectionType connectionType, ::NetherNet::NetworkID const& netherNetId);

    MCAPI void* $ctor(::Social::ConnectionType connectionType, ::std::string const& ipAddress, int port);

#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::Social::ConnectionType            connectionType,
        ::NetherNet::NetworkID const&       netherNetId,
        ::PlayerMessaging::NetworkID const& playerMessagingId
    );

    MCAPI void* $ctor(
        ::Social::ConnectionType      connectionType,
        ::NetherNet::NetworkID const& netherNetId,
        ::GatheringServerInfo const&  serverInfo
    );

    MCAPI void* $ctor(
        ::Social::ConnectionType      connectionType,
        ::NetherNet::NetworkID const& netherNetId,
        ::ThirdPartyInfo const&       serverInfo
    );
#endif

    MCAPI void* $ctor(
        ::RakNet::SystemAddress      connection,
        ::RakNet::RakNetGUID const&  rakGuid,
        ::ThirdPartyInfo const&      serverInfo,
        ::GatheringServerInfo const& gatheringServerInfo
    );

#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::Social::ConnectionType     connectionType,
        ::std::string const&         ipAddress,
        int                          port,
        ::GatheringServerInfo const& serverInfo
    );

    MCAPI void* $ctor(
        ::Social::ConnectionType connectionType,
        ::std::string const&     ipAddress,
        int                      port,
        ::ThirdPartyInfo const&  serverInfo
    );

    MCAPI void* $ctor(
        ::Social::ConnectionType            connectionType,
        ::NetherNet::NetworkID const&       netherNetId,
        ::PlayerMessaging::NetworkID const& playerMessagingId,
        ::ThirdPartyInfo const&             thirdPartyInfo
    );

    MCAPI void* $ctor(
        ::Social::ConnectionType      connectionType,
        ::NetherNet::NetworkID const& netherNetId,
        ::std::string&                serverRegion,
        int                           serviceQuality
    );

    MCAPI void* $ctor(
        ::Social::ConnectionType connectionType,
        ::std::string const&     ipAddress,
        int                      port,
        ::std::string&           serverRegion,
        int                      serviceQuality
    );

    MCAPI void* $ctor(
        ::Social::ConnectionType            connectionType,
        ::std::string const&                ipAddress,
        int                                 port,
        ::RakNet::RakNetGUID const&         rakNetGUID,
        ::NetherNet::NetworkID const&       netherNetId,
        ::PlayerMessaging::NetworkID const& playerMessagingId
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Social
