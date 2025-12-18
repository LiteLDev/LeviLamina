#include "ll/api/service/ServerInfo.h"
#include "ll/api/service/Bedrock.h"
#include "mc/network/ServerNetworkHandler.h"

namespace ll {

bool setServerMotd(std::string const& serverName, bool shouldAnnounce) {
    if (!service::getServerNetworkHandler()) return false;
    service::getServerNetworkHandler()->allowIncomingConnections(serverName, shouldAnnounce);
    return true;
}
} // namespace ll
