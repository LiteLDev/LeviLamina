#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

enum class JoinGameStatus : int {
    MultiplayerNotEnabled           = 0,
    Succeeded                       = 1,
    SucceededRealm                  = 2,
    SucceededThirdPartyServer       = 3,
    NotSignedIntoMultiplayerService = 4,
    BlockedByXBLPermissions         = 5,
    BlockedByPlatformPermissions    = 6,
    SessionFull                     = 7,
    SessionNotFound                 = 8,
    SessionAccessDenied             = 9,
    CrossPlayDisabled               = 10,
    HostLeft                        = 11,
    OutdatedServer                  = 12,
    OutdatedClient                  = 13,
    ClientCancelled                 = 14,
};

}
