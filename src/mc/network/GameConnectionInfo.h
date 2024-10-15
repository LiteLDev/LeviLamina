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
    // NOLINTBEGIN
    MCAPI GameConnectionInfo();

    MCAPI GameConnectionInfo(class Social::GameConnectionInfo const&);

    MCAPI GameConnectionInfo(
        struct RakNet::SystemAddress     connection,
        struct RakNet::RakNetGUID const& rakGuid,
        class ThirdPartyInfo const&      serverInfo,
        class GatheringServerInfo const& gatheringServerInfo
    );

    MCAPI std::string const& getHostIpAddress() const;

    MCAPI int getPort() const;

    MCAPI class ThirdPartyInfo const& getThirdPartyServerInfo() const;

    MCAPI ::Social::ConnectionType getType() const;

    MCAPI class Social::GameConnectionInfo& operator=(class Social::GameConnectionInfo const&);

    MCAPI void setUnresolvedUrl(std::string const& url);

    MCAPI ~GameConnectionInfo();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void* ctor$(class Social::GameConnectionInfo const&);

    MCAPI void* ctor$(
        struct RakNet::SystemAddress     connection,
        struct RakNet::RakNetGUID const& rakGuid,
        class ThirdPartyInfo const&      serverInfo,
        class GatheringServerInfo const& gatheringServerInfo
    );

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Social
