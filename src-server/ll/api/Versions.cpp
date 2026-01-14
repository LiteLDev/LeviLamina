#include "ll/api/Versions.h"
#include "mc/common/BuildInfo.h"
#include "mc/common/Common.h"
#include "mc/common/SharedConstants.h"

namespace ll {
data::Version getGameVersion() {
    static auto ver = [] {
        auto info    = Common::getBuildInfo();
        auto v       = data::Version{info.mBuildId};
        v.preRelease = data::PreRelease{};
        v.preRelease->values.emplace_back((uint16_t)SharedConstants::RevisionVersion());
        v.preRelease->values.emplace_back((uint16_t)SharedConstants::NetworkProtocolVersion());
        v.build = info.mCommitId.substr(0, std::min(info.mCommitId.size(), (size_t)7));
        return v;
    }();
    return ver;
}

int getNetworkProtocolVersion() { return SharedConstants::NetworkProtocolVersion(); }

bool isClient() { return false; }
} // namespace ll
