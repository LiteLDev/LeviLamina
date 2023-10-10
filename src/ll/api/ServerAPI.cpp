#include "ll/api/ServerAPI.h"
#include "ll/api/service/GlobalService.h"
#include "mc/common/Common.h"
#include "mc/common/SharedConstants.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/world/Minecraft.h"

namespace ll {
std::string getBdsVersion() { return Common::getGameVersionStringNet(); }

int getServerProtocolVersion() { return SharedConstants::NetworkProtocolVersion; }

bool setServerMotd(std::string const& motd) {
    if (!Global<ServerNetworkHandler>) return false;

    Global<ServerNetworkHandler>->allowIncomingConnections(motd, true);
    return true;
}
} // namespace ll
