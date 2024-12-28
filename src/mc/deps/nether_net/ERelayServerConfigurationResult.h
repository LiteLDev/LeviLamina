#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

enum class ERelayServerConfigurationResult : int {
    ERelayServerConfigurationResultSuccess                  = 0,
    ERelayServerConfigurationResultFailure                  = 1,
    ERelayServerConfigurationResultParsingErrorNoUrls       = 2,
    ERelayServerConfigurationResultParsingErrorNoCreds      = 3,
    ERelayServerConfigurationResultParsingErrorNoServers    = 4,
    ERelayServerConfigurationResultParsingErrorNoExpiration = 5,
};

}
