#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

enum class JoinRealmWorldResult : int {
    Ok                                  = 0,
    JoinRealmAlreadyInProgress          = 1,
    RealmIDConversionFailed             = 2,
    MissingPlatformMembership           = 3,
    MultiplayerPrivilegeBlocked         = 4,
    RealmsNotInitialized                = 5,
    MobileDataBlockedAndNoWifi          = 6,
    InvalidCrossPlatformMultiplayerSkin = 7,
    RealmsApiNotAvailable               = 8,
    UnassignedDevVersion                = 9,
    MemberOfTooManyRealms               = 10,
    CannotConnectToRealm                = 11,
    UnknownError                        = 12,
    TimelineRequired                    = 13,
};

}
