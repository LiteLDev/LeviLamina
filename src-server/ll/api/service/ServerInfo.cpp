#include "ll/api/service/ServerInfo.h"
#include "ll/api/service/Bedrock.h"
#include "mc/network/ServerNetworkHandler.h"

namespace ll {
static std::atomic<ServerStatus> status;
void                             setServerStatus(ServerStatus value) { status = value; }
ServerStatus                     getServerStatus() { return status.load(); }

bool setServerMotd(std::string const& serverName, bool shouldAnnounce) {
    if (!service::getServerNetworkHandler()) return false;
    service::getServerNetworkHandler()->allowIncomingConnections(serverName, shouldAnnounce);
    return true;
}
} // namespace ll
