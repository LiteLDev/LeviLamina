#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ClientCameraAimAssistPacketAction : uchar {
    SetFromCameraPreset = 0,
    Clear = 1,
    Count = 2,
};
