#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RuleDebugOverride {

enum class BooleanOverrideID : int {
    CreateNewWorldOptInBetaSupported                 = 0,
    MultiplayerSupported                             = 1,
    PlatformBroadcastingSupported                    = 2,
    PlatformBroadcastOptionModifiable                = 3,
    PlatformBroadcastInviteOptionSupported           = 4,
    PlatformBroadcastFriendsOfFriendsOptionSupported = 5,
    Count                                            = 6,
};

}
