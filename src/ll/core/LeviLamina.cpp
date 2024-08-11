#include "ll/core/LeviLamina.h"
#include "ll/api/Versions.h"
#include "ll/core/Version.h"
namespace ll {
std::shared_ptr<mod::NativeMod> const& getSelfModIns() {
    static auto llSelf = std::make_shared<mod::NativeMod>(
        mod::Manifest{
            .entry{"LeviLamina.dll"},
            .name{selfModName},
            .type{mod::NativeModManagerName},
            .version{getLoaderVersion()}
        },
        sys_utils::getCurrentModuleHandle()
    );
    return llSelf;
}
Logger& getLogger() { return getSelfModIns()->getLogger(); }

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
} // namespace ll
