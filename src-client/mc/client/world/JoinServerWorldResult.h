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
    ExperienceClientVersionMismatchError  = 12,
    ExperiencePlayerNotEligibleError      = 13,
    ExperienceUnavailableError            = 14,
    ExperienceDestinationNotFoundError    = 15,
    ExperienceDestinationUnavailableError = 16,
    ExperiencePartyInvalidError           = 17,
    ExperienceDependencyUnavailableError  = 18,
    ExperienceInternalServerError         = 19,
    ExperienceUnknownError                = 20,
    UnknownError                          = 21,
};

}
