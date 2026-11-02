#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/ServerSupportedAuthenticationTypes.h"
#include "mc/deps/nether_net/NetworkID.h"
#include "mc/deps/raknet/RakNetGUID.h"
#include "mc/network/ConnectionType.h"
#include "mc/network/Nonce.h"
#include "mc/network/ResolvedExperienceInfo.h"
#include "mc/network/ThirdPartyInfo.h"
#include "mc/network/TransportLayer.h"
#include "mc/network/services/signaling/player_messaging/NetworkID.h"

// auto generated forward declare list
// clang-format off
class IIdentityAssertionVerifier;
namespace Json { class Value; }
// clang-format on

namespace Social {

class GameConnectionInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::Social::ConnectionType>                                          mType;
    ::ll::TypedStorage<4, 4, ::TransportLayer>                                                  mTransportType;
    ::ll::TypedStorage<8, 32, ::std::string>                                                    mHostIpAddress;
    ::ll::TypedStorage<8, 32, ::std::string>                                                    mUnresolvedUrl;
    ::ll::TypedStorage<8, 32, ::std::string>                                                    mServerRegion;
    ::ll::TypedStorage<8, 32, ::std::string>                                                    mExternalServerName;
    ::ll::TypedStorage<4, 4, int>                                                               mServiceQuality;
    ::ll::TypedStorage<4, 4, int>                                                               mPort;
    ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>                                             mRakNetGUID;
    ::ll::TypedStorage<8, 24, ::NetherNet::NetworkID>                                           mNetherNetId;
    ::ll::TypedStorage<8, 16, ::PlayerMessaging::NetworkID>                                     mPlayerMessagingId;
    ::ll::TypedStorage<1, 2, ::ServerSupportedAuthenticationTypes>                              mSupportedAuth;
    ::ll::TypedStorage<8, 168, ::ThirdPartyInfo>                                                mThirdPartyServerInfo;
    ::ll::TypedStorage<8, 312, ::std::optional<::Social::ResolvedExperienceInfo>>               mResolvedExperienceInfo;
    ::ll::TypedStorage<1, 1, bool>                                                              mAllowSmallDownloads;
    ::ll::TypedStorage<1, 1, bool>                                                              mDisableTrickleIce;
    ::ll::TypedStorage<8, 40, ::std::optional<::Social::Nonce>>                                 mNonce;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::IIdentityAssertionVerifier>>> mServerIdentityVerifier;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    GameConnectionInfo(GameConnectionInfo const&);

#else // LL_PLAT_C
#endif
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GameConnectionInfo();

#ifdef LL_PLAT_C
    MCNAPI GameConnectionInfo(::Social::GameConnectionInfo&&);

    MCNAPI GameConnectionInfo(::Social::GameConnectionInfo const&);
#endif

    MCNAPI GameConnectionInfo(::Social::ConnectionType connectionType, ::NetherNet::NetworkID const& netherNetId);

#ifdef LL_PLAT_C
    MCNAPI GameConnectionInfo(
        ::Social::ConnectionType            connectionType,
        ::NetherNet::NetworkID const&       netherNetId,
        ::PlayerMessaging::NetworkID const& playerMessagingId
    );

    MCNAPI GameConnectionInfo(
        ::Social::ConnectionType      connectionType,
        ::NetherNet::NetworkID const& netherNetId,
        ::ThirdPartyInfo const&       serverInfo
    );

    MCNAPI GameConnectionInfo(
        ::Social::ConnectionType            connectionType,
        ::NetherNet::NetworkID const&       netherNetId,
        ::PlayerMessaging::NetworkID const& playerMessagingId,
        ::ThirdPartyInfo const&             thirdPartyInfo
    );

    MCNAPI GameConnectionInfo(
        ::Social::ConnectionType      connectionType,
        ::NetherNet::NetworkID const& netherNetId,
        ::std::string&                serverRegion,
        int                           serviceQuality
    );
#endif

    MCNAPI GameConnectionInfo(
        ::Social::ConnectionType connectionType,
        ::TransportLayer         transportType,
        ::std::string const&     ipAddress,
        int                      port
    );

    MCNAPI GameConnectionInfo(
        ::Social::ConnectionType connectionType,
        ::TransportLayer         transportType,
        ::std::string const&     ipAddress,
        int                      port,
        ::ThirdPartyInfo const&  serverInfo
    );

#ifdef LL_PLAT_C
    MCNAPI GameConnectionInfo(
        ::Social::ConnectionType connectionType,
        ::TransportLayer         transportType,
        ::std::string const&     ipAddress,
        int                      port,
        ::ThirdPartyInfo const&  serverInfo,
        ::std::string const&     externalServerName
    );

    MCNAPI GameConnectionInfo(
        ::Social::ConnectionType connectionType,
        ::TransportLayer         transportType,
        ::std::string const&     ipAddress,
        int                      port,
        ::std::string&           serverRegion,
        int                      serviceQuality
    );

    MCNAPI ::std::string const getServerRegionName() const;

    MCNAPI ::Social::GameConnectionInfo& operator=(::Social::GameConnectionInfo&&);
#endif

    MCNAPI ::Social::GameConnectionInfo& operator=(::Social::GameConnectionInfo const&);

#ifdef LL_PLAT_C
    MCNAPI void toJson(::Json::Value& connectionJson) const;
#endif

    MCAPI ~GameConnectionInfo();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::Social::GameConnectionInfo fromJson(::Json::Value const& properties);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Social::GameConnectionInfo&&);

    MCNAPI void* $ctor(::Social::GameConnectionInfo const&);
#endif

    MCNAPI void* $ctor(::Social::ConnectionType connectionType, ::NetherNet::NetworkID const& netherNetId);

#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::Social::ConnectionType            connectionType,
        ::NetherNet::NetworkID const&       netherNetId,
        ::PlayerMessaging::NetworkID const& playerMessagingId
    );

    MCNAPI void* $ctor(
        ::Social::ConnectionType      connectionType,
        ::NetherNet::NetworkID const& netherNetId,
        ::ThirdPartyInfo const&       serverInfo
    );

    MCNAPI void* $ctor(
        ::Social::ConnectionType            connectionType,
        ::NetherNet::NetworkID const&       netherNetId,
        ::PlayerMessaging::NetworkID const& playerMessagingId,
        ::ThirdPartyInfo const&             thirdPartyInfo
    );

    MCNAPI void* $ctor(
        ::Social::ConnectionType      connectionType,
        ::NetherNet::NetworkID const& netherNetId,
        ::std::string&                serverRegion,
        int                           serviceQuality
    );
#endif

    MCNAPI void* $ctor(
        ::Social::ConnectionType connectionType,
        ::TransportLayer         transportType,
        ::std::string const&     ipAddress,
        int                      port
    );

    MCNAPI void* $ctor(
        ::Social::ConnectionType connectionType,
        ::TransportLayer         transportType,
        ::std::string const&     ipAddress,
        int                      port,
        ::ThirdPartyInfo const&  serverInfo
    );

#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::Social::ConnectionType connectionType,
        ::TransportLayer         transportType,
        ::std::string const&     ipAddress,
        int                      port,
        ::ThirdPartyInfo const&  serverInfo,
        ::std::string const&     externalServerName
    );

    MCNAPI void* $ctor(
        ::Social::ConnectionType connectionType,
        ::TransportLayer         transportType,
        ::std::string const&     ipAddress,
        int                      port,
        ::std::string&           serverRegion,
        int                      serviceQuality
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
