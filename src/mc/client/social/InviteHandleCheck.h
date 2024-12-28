#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

enum class InviteHandleCheck : int {
    NotStarted                          = 0,
    NotReady                            = 1,
    HandleIsForDifferentSession         = 2,
    HandleIsForSameSession              = 3,
    HandleIsRealmsAllowListNotification = 4,
    HandleIsForLegacySession            = 5,
    Ready                               = 6,
    SessionNotFound                     = 7,
    Invalid                             = 8,
};

}
