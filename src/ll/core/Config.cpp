#include "ll/core/Config.h"
#include "ll/core/ConfigImpl.h"

namespace ll {

namespace config_detail {

Expected<> validateLeviConfig(LeviConfig& config) noexcept {
    auto validation = protocol::detail::validateProtocolConfig(config.targeted.protocol);
    if (!validation) {
        config.targeted.protocol.enabled = false;
    }
    return validation;
}

} // namespace config_detail

LL_CONFIG_IMPL(LeviConfig, u8"Config.json", config_detail::validateLeviConfig);

} // namespace ll
