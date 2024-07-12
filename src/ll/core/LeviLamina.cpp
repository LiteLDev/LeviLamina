#include "ll/core/LeviLamina.h"
#include "ll/api/Versions.h"
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
} // namespace ll
