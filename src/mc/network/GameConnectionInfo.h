#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/ConnectionType.h"

// auto generated forward declare list
// clang-format off
class GatheringServerInfo;
class ThirdPartyInfo;
namespace Json { class Value; }
namespace NetherNet { struct NetworkID; }
namespace RakNet { struct RakNetGUID; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace Social {

class GameConnectionInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2>   mUnk206dd6;
    ::ll::UntypedStorage<8, 32>  mUnkc765ce;
    ::ll::UntypedStorage<8, 32>  mUnk26dcb3;
    ::ll::UntypedStorage<8, 32>  mUnk46f295;
    ::ll::UntypedStorage<4, 4>   mUnk6f6fbe;
    ::ll::UntypedStorage<4, 4>   mUnk2115f0;
    ::ll::UntypedStorage<8, 16>  mUnk76ec07;
    ::ll::UntypedStorage<8, 24>  mUnk668c63;
    ::ll::UntypedStorage<8, 16>  mUnk801ead;
    ::ll::UntypedStorage<8, 200> mUnk508ac9;
    ::ll::UntypedStorage<8, 96>  mUnkd989b0;
    ::ll::UntypedStorage<1, 1>   mUnk28f2a6;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GameConnectionInfo();

    MCNAPI_C GameConnectionInfo(::Social::GameConnectionInfo&&);

    MCNAPI_C GameConnectionInfo(::Social::GameConnectionInfo const&);

    MCNAPI_C GameConnectionInfo(::Social::ConnectionType connectionType, ::NetherNet::NetworkID const& netherNetId);

    MCNAPI_C GameConnectionInfo(::Social::ConnectionType connectionType, ::std::string const& ipAddress, int port);

    MCNAPI_C GameConnectionInfo(
        ::Social::ConnectionType      connectionType,
        ::NetherNet::NetworkID const& netherNetId,
        ::ThirdPartyInfo const&       serverInfo
    );

    MCNAPI_C GameConnectionInfo(
        ::RakNet::SystemAddress      connection,
        ::RakNet::RakNetGUID const&  rakGuid,
        ::ThirdPartyInfo const&      serverInfo,
        ::GatheringServerInfo const& gatheringServerInfo
    );

    MCNAPI_C GameConnectionInfo(
        ::Social::ConnectionType     connectionType,
        ::std::string const&         ipAddress,
        int                          port,
        ::GatheringServerInfo const& serverInfo
    );

    MCNAPI_C GameConnectionInfo(
        ::Social::ConnectionType connectionType,
        ::std::string const&     ipAddress,
        int                      port,
        ::ThirdPartyInfo const&  serverInfo
    );

    MCNAPI_C GameConnectionInfo(
        ::Social::ConnectionType connectionType,
        ::std::string const&     ipAddress,
        int                      port,
        ::std::string&           serverRegion,
        int                      serviceQuality
    );

    MCNAPI_C ::std::string getCorrelationId() const;

    MCNAPI_C ::Social::GameConnectionInfo& operator=(::Social::GameConnectionInfo&&);

    MCNAPI ::Social::GameConnectionInfo& operator=(::Social::GameConnectionInfo const&);

    MCNAPI ~GameConnectionInfo();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::Social::GameConnectionInfo fromJson(::Json::Value const& properties);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI_C void* $ctor(::Social::GameConnectionInfo&&);

    MCNAPI_C void* $ctor(::Social::GameConnectionInfo const&);

    MCNAPI_C void* $ctor(::Social::ConnectionType connectionType, ::NetherNet::NetworkID const& netherNetId);

    MCNAPI_C void* $ctor(::Social::ConnectionType connectionType, ::std::string const& ipAddress, int port);

    MCNAPI_C void* $ctor(
        ::Social::ConnectionType      connectionType,
        ::NetherNet::NetworkID const& netherNetId,
        ::ThirdPartyInfo const&       serverInfo
    );

    MCNAPI_C void* $ctor(
        ::RakNet::SystemAddress      connection,
        ::RakNet::RakNetGUID const&  rakGuid,
        ::ThirdPartyInfo const&      serverInfo,
        ::GatheringServerInfo const& gatheringServerInfo
    );

    MCNAPI_C void* $ctor(
        ::Social::ConnectionType     connectionType,
        ::std::string const&         ipAddress,
        int                          port,
        ::GatheringServerInfo const& serverInfo
    );

    MCNAPI_C void* $ctor(
        ::Social::ConnectionType connectionType,
        ::std::string const&     ipAddress,
        int                      port,
        ::ThirdPartyInfo const&  serverInfo
    );

    MCNAPI_C void* $ctor(
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
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social
