#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ServerboundLoadingScreenPacketType : int {
    Unknown = 0,
    StartLoadingScreen = 1,
    EndLoadingScreen = 2,
};
