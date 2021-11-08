#include <ServerAPI.h>
#include <string>
#include <MCApi/Common.hpp>
#include <MCApi/SharedConstants.hpp>
namespace LL {

    std::string getBdsVersion() {
    return Common::getGameVersionString();
    }
    int getServerProtocolVersion() {
        return SharedConstants::NetworkProtocolVersion;
    }
    } // namespace LL