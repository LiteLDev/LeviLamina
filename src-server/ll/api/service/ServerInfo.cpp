#include "ll/api/service/ServerInfo.h"
#include "ll/api/service/Bedrock.h"
#include "ll/core/Version.h"
#include "mc/common/BuildInfo.h"
#include "mc/common/Common.h"
#include "mc/common/SharedConstants.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/world/Minecraft.h"

namespace ll {
static std::atomic<ServerStatus> status;
void                             setServerStatus(ServerStatus value) { status = value; }
ServerStatus                     getServerStatus() { return status.load(); }

int getServerProtocolVersion() { return SharedConstants::NetworkProtocolVersion; }

bool setServerMotd(std::string const& serverName, bool shouldAnnounce) {
    if (!service::getServerNetworkHandler()) return false;
    service::getServerNetworkHandler()->allowIncomingConnections(serverName, shouldAnnounce);
    return true;
}
} // namespace ll
