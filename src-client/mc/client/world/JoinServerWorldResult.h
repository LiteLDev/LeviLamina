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
    BlockedByVersionError                 = 7,
    UserBannedError                       = 8,
    ThirdPartyBadIPError                  = 9,
    ThirdPartyNoServerOrServerLockedError = 10,
    UnknownError                          = 11,
};

}
