#include <mc/Common.hpp>
#include <mc/SharedConstants.hpp>
#include <mc/Minecraft.hpp>
#include <mc/ServerNetworkHandler.hpp>
#include <ServerAPI.h>
#include <string>
class UserEntityIdentifierComponent;

namespace LL {
std::string getBdsVersion() {
    return Common::getGameVersionString();
}

int getServerProtocolVersion() {
    return SharedConstants::NetworkProtocolVersion;
}

bool setServerMotd(const std::string& motd) {
    if (!Global<ServerNetworkHandler>)
        return false;

    Global<ServerNetworkHandler>->allowIncomingConnections(motd, true);
    return true;
}
} // namespace LL
