#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/ConnectionType.h"

// auto generated forward declare list
// clang-format off
class GatheringServerInfo;
class ThirdPartyInfo;
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
    ::ll::UntypedStorage<4, 4>   mUnk2115f0;
    ::ll::UntypedStorage<8, 16>  mUnk76ec07;
    ::ll::UntypedStorage<8, 8>   mUnkb3e742;
    ::ll::UntypedStorage<8, 168> mUnk508ac9;
    ::ll::UntypedStorage<8, 136> mUnkd989b0;
    ::ll::UntypedStorage<1, 1>   mUnk28f2a6;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GameConnectionInfo();

    MCAPI GameConnectionInfo(::Social::GameConnectionInfo const&);

    MCAPI GameConnectionInfo(
        ::RakNet::SystemAddress      connection,
        ::RakNet::RakNetGUID const&  rakGuid,
        ::ThirdPartyInfo const&      serverInfo,
        ::GatheringServerInfo const& gatheringServerInfo
    );

    MCFOLD ::std::string const& getHostIpAddress() const;

    MCFOLD int getPort() const;

    MCFOLD ::ThirdPartyInfo const& getThirdPartyServerInfo() const;

    MCFOLD ::Social::ConnectionType getType() const;

    MCAPI ::Social::GameConnectionInfo& operator=(::Social::GameConnectionInfo const&);

    MCAPI void setUnresolvedUrl(::std::string const& url);

    MCAPI ~GameConnectionInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Social::GameConnectionInfo const&);

    MCAPI void* $ctor(
        ::RakNet::SystemAddress      connection,
        ::RakNet::RakNetGUID const&  rakGuid,
        ::ThirdPartyInfo const&      serverInfo,
        ::GatheringServerInfo const& gatheringServerInfo
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Social
