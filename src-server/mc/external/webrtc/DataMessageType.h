#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class DataMessageType : int {
    KText = 0,
    KBinary = 1,
    KControl = 2,
};

}
