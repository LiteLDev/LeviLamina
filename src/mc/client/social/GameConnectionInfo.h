#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/ConnectionType.h"

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

    MCAPI
    GameConnectionInfo(struct RakNet::SystemAddress, struct RakNet::RakNetGUID const&, class ThirdPartyInfo const&, class GatheringServerInfo const&);

    MCAPI std::string const& getHostIpAddress() const;

    MCAPI int getPort() const;

    MCAPI class ThirdPartyInfo const& getThirdPartyServerInfo() const;

    MCAPI ::Social::ConnectionType getType() const;

    MCAPI class Social::GameConnectionInfo& operator=(class Social::GameConnectionInfo const&);

    MCAPI void setUnresolvedUrl(std::string const&);

    MCAPI ~GameConnectionInfo();

    // NOLINTEND
};

}; // namespace Social
