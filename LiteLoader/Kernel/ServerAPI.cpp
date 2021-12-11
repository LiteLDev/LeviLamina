#include <MC/Common.hpp>
#include <MC/SharedConstants.hpp>
#include <MC/Minecraft.hpp>
#include <MC/ServerNetworkHandler.hpp>
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

    bool setServerMotd(const std::string& motd)
    {
        ServerNetworkHandler* snh = ::Global<Minecraft>->getServerNetworkHandler();
        if (!snh)
            return false;

        snh->allowIncomingConnections(motd, true);
        return true;
    }
} // namespace LL
