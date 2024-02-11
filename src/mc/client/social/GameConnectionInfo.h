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
    // symbol: ??0GameConnectionInfo@Social@@QEAA@XZ
    MCAPI GameConnectionInfo();

    // symbol: ??0GameConnectionInfo@Social@@QEAA@AEBV01@@Z
    MCAPI GameConnectionInfo(class Social::GameConnectionInfo const&);

    // symbol:
    // ??0GameConnectionInfo@Social@@QEAA@USystemAddress@RakNet@@AEBURakNetGUID@3@AEBVThirdPartyInfo@@AEBVGatheringServerInfo@@@Z
    MCAPI
    GameConnectionInfo(struct RakNet::SystemAddress, struct RakNet::RakNetGUID const&, class ThirdPartyInfo const&, class GatheringServerInfo const&);

    // symbol:
    // ?getHostIpAddress@GameConnectionInfo@Social@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getHostIpAddress() const;

    // symbol: ?getPort@GameConnectionInfo@Social@@QEBAHXZ
    MCAPI int getPort() const;

    // symbol: ?getThirdPartyServerInfo@GameConnectionInfo@Social@@QEBAAEBVThirdPartyInfo@@XZ
    MCAPI class ThirdPartyInfo const& getThirdPartyServerInfo() const;

    // symbol: ?getType@GameConnectionInfo@Social@@QEBA?AW4ConnectionType@2@XZ
    MCAPI ::Social::ConnectionType getType() const;

    // symbol: ??4GameConnectionInfo@Social@@QEAAAEAV01@AEBV01@@Z
    MCAPI class Social::GameConnectionInfo& operator=(class Social::GameConnectionInfo const&);

    // symbol:
    // ?setUnresolvedUrl@GameConnectionInfo@Social@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setUnresolvedUrl(std::string const&);

    // symbol: ??1GameConnectionInfo@Social@@QEAA@XZ
    MCAPI ~GameConnectionInfo();

    // NOLINTEND
};

}; // namespace Social
