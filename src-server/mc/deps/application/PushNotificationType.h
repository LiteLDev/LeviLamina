#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PushNotificationType : int {
    Achievement = 0,
    MultiplayerInvite = 1,
    MultiplayerInviteRaw = 2,
    FocusLost = 3,
    Unknown = 99,
};
