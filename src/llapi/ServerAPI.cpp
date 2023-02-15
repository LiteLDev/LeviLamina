#include "llapi/mc/Common.hpp"
#include "llapi/mc/SharedConstants.hpp"
#include "llapi/mc/Minecraft.hpp"
#include "llapi/mc/ServerNetworkHandler.hpp"
#include "llapi/ServerAPI.h"
#include <string>

class UserEntityIdentifierComponent;

namespace ll {
std::string getBdsVersion() { return Common::getGameVersionString(); }

int getServerProtocolVersion() { return SharedConstants::NetworkProtocolVersion; }

bool setServerMotd(const std::string& motd) {
    if (!Global<ServerNetworkHandler>)
        return false;

    Global<ServerNetworkHandler>->allowIncomingConnections(motd, true);
    return true;
}
} // namespace ll

// for abi compatibility

namespace LL {
std::string getBdsVersion() { return ll::getBdsVersion(); }

int getServerProtocolVersion() { return ll::getServerProtocolVersion(); }

bool setServerMotd(const std::string& motd) { return ll::setServerMotd(motd); }
} // namespace LL
