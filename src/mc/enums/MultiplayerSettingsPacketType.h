#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class MultiplayerSettingsPacketType {
    EnableMultiplayer  = 0,
    DisableMultiplayer = 1,
    RefreshJoincode    = 2
};
