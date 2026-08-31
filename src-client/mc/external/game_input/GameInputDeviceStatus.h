#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameInput::v2 {

enum class GameInputDeviceStatus : int {
    GameInputDeviceNoStatus        = 0,
    GameInputDeviceConnected       = 1,
    GameInputDeviceHapticInfoReady = 2097152,
    GameInputDeviceAnyStatus       = -1,
};

}
