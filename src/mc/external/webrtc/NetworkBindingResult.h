#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class NetworkBindingResult : int {
    Success         = 0,
    Failure         = -1,
    NotImplemented  = -2,
    AddressNotFound = -3,
    NetworkChanged  = -4,
};

}
