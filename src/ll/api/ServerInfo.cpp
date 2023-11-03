#include "ll/api/ServerInfo.h"
#include "ll/api/service/GlobalService.h"
#include "ll/core/Version.h"
#include "mc/common/BuildInfo.h"
#include "mc/common/Common.h"
#include "mc/common/SharedConstants.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/world/Minecraft.h"

namespace ll {
plugin::Version getBdsVersion() {
    auto info    = Common::getBuildInfo();
    auto v       = plugin::Version{info.mBuildId};
    v.preRelease = plugin::PreRelease{};
    v.preRelease.value().values.emplace_back((uint16_t)SharedConstants::RevisionVersion);
    v.preRelease.value().values.emplace_back((uint16_t)SharedConstants::NetworkProtocolVersion);
    v.build = info.mCommitId.substr(0, 9);
    return v;
}

plugin::Version getLoaderVersion() {
    auto v = plugin::Version{
        LL_VERSION_MAJOR,
        LL_VERSION_MINOR,
        LL_VERSION_PATCH,
    };
    v.build = LL_VERSION_TO_STRING(LL_VERSION_COMMIT_SHA);
#ifdef LL_VERSION_PRERELEASE
    v.preRelease = PreRelease{LL_VERSION_PRERELEASE};
#endif
    return v;
}

int getServerProtocolVersion() { return SharedConstants::NetworkProtocolVersion; }

bool setServerMotd(std::string const& motd) {
    if (!Global<ServerNetworkHandler>) return false;
    Global<ServerNetworkHandler>->allowIncomingConnections(motd, true);
    return true;
}
} // namespace ll
