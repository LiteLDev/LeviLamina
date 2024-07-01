#include "ll/api/Versions.h"
#include "ll/core/Version.h"
#include "mc/common/BuildInfo.h"
#include "mc/common/Common.h"
#include "mc/common/SharedConstants.h"

namespace ll {
data::Version getGameVersion() {
    static auto ver = [] {
        auto info    = Common::getBuildInfo();
        auto v       = data::Version{info.mBuildId};
        v.preRelease = data::PreRelease{};
        v.preRelease->values.emplace_back((uint16_t)SharedConstants::RevisionVersion);
        v.preRelease->values.emplace_back((uint16_t)SharedConstants::NetworkProtocolVersion);
        v.build = info.mCommitId.substr(0, std::min(info.mCommitId.size(), (size_t)7));
        return v;
    }();
    return ver;
}

data::Version getLoaderVersion() {
    static auto ver = [] {
        auto v = data::Version{
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
}