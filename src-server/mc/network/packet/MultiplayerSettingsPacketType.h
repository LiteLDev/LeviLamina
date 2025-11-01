#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class MultiplayerSettingsPacketType : int {
    EnableMultiplayer = 0,
    DisableMultiplayer = 1,
    RefreshJoincode = 2,
};
