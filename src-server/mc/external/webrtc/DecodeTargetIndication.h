#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class DecodeTargetIndication : int {
    KNotPresent = 0,
    KDiscardable = 1,
    KSwitch = 2,
    KRequired = 3,
};

}
