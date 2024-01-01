#include "ll/api/ServerInfo.h"
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

Version getBdsVersion() {
    static auto ver = [] {
        auto info    = Common::getBuildInfo();
        auto v       = Version{info.mBuildId};
        v.preRelease = PreRelease{};
        v.preRelease->values.emplace_back((uint16_t)SharedConstants::RevisionVersion);
        v.preRelease->values.emplace_back((uint16_t)SharedConstants::NetworkProtocolVersion);
        v.build = info.mCommitId.substr(0, 9);
        return v;
    }();
    return ver;
}

Version getLoaderVersion() {
    static auto ver = [] {
        auto v = Version{
            LL_VERSION_MAJOR,
            LL_VERSION_MINOR,
            LL_VERSION_PATCH,
        };
        v.build = LL_VERSION_TO_STRING(LL_VERSION_COMMIT_SHA);
#ifdef LL_VERSION_PRERELEASE
        v.preRelease = PreRelease{LL_VERSION_PRERELEASE};
#endif
        return v;
    }();
    return ver;
}

int getServerProtocolVersion() { return SharedConstants::NetworkProtocolVersion; }

bool setServerMotd(std::string const& motd) {
    if (!service::getServerNetworkHandler()) return false;
    service::getServerNetworkHandler()->allowIncomingConnections(motd, true);
    return true;
}
} // namespace ll
