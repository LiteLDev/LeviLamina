#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

enum class JoinRealmWorldResult : int {
    Ok                                       = 0,
    JoinRealmAlreadyInProgress               = 1,
    RealmIDConversionFailed                  = 2,
    MissingPlatformMembership                = 3,
    MultiplayerPrivilegeBlocked              = 4,
    RealmsNotInitialized                     = 5,
    MobileDataBlockedAndNoWifi               = 6,
    InvalidCrossPlatformMultiplayerSkin      = 7,
    UnverifiedSkin                           = 8,
    RealmsApiNotAvailable                    = 9,
    UnassignedDevVersion                     = 10,
    MemberOfTooManyRealms                    = 11,
    CannotConnectToRealm                     = 12,
    UnknownError                             = 13,
    TimelineRequired                         = 14,
    RealmSuspended                           = 15,
    FetchingRealm                            = 16,
    FailedFetch                              = 17,
    BlockedByHardcoreWarning                 = 18,
    NonOwnerJoiningFullWorld                 = 19,
    WorldIsNotOpen                           = 20,
    PartyIsTooLarge                          = 21,
    SomePartyMembersDontHaveAccessCantInvite = 22,
    SomePartyMembersDontHaveAccess           = 23,
    NotInvitedToRealm                        = 24,
    NotInvitedToPartyDestinationRealm        = 25,
};

}
