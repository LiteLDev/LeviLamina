#include "ll/api/Versions.h"
#include "ll/core/Version.h"
#include "mc/common/BuildInfo.h"
#include "mc/common/Common.h"

namespace ll {
data::Version getGameVersion() {
    static auto ver = [] {
        auto info = Common::getBuildInfo();
        auto v    = data::Version{info.mBuildId};
        v.build   = info.mCommitId.substr(0, std::min(info.mCommitId.size(), (size_t)7));
        return v;
    }();
    return ver;
}

int getNetworkProtocolVersion() { return TARGET_BDS_PROTOCOL_VERSION; }

bool isClient() { return true; }
} // namespace ll
