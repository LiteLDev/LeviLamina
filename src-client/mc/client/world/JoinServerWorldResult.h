#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

enum class JoinServerWorldResult : int {
    Ok                                    = 0,
    InvalidServerIdError                  = 1,
    InvalidUserError                      = 2,
    NoInternetError                       = 3,
    UserNeedsToBeSignedInError            = 4,
    BlockedByPlatformError                = 5,
    BlockedByXBLError                     = 6,
    UserBannedError                       = 7,
    ThirdPartyBadIPError                  = 8,
    ThirdPartyNoServerOrServerLockedError = 9,
    ExternalLocalhostError                = 10,
    ExternalPrivateNetworkError           = 11,
    UnknownError                          = 12,
};

}
