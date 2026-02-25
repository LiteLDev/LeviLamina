#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

enum class PlayerPermissionsError : uchar {
    PlayerIdInvalid                   = 0,
    PlayerPermissionsMissing          = 1,
    SelectedPlayerLeft                = 2,
    SelectedPlayerPermissionsChanged  = 3,
    OperatorCommandsPermissionRevoked = 4,
    KickCommandFailed                 = 5,
};

}
