#include <MC/Common.hpp>
#include <MC/SharedConstants.hpp>
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
} // namespace LL
