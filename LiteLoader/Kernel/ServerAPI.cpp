#include <ServerAPI.h>
#include <string>
#include <MCApi/Common.hpp>
#include <MCApi/SharedConstants.hpp>
class UserEntityIdentifierComponent;

namespace LL {

    std::string getBdsVersion() {
    return Common::getGameVersionString();
    }
    int getServerProtocolVersion() {
        return SharedConstants::NetworkProtocolVersion;
    }
    } // namespace LL
