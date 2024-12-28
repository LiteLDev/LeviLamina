#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

enum class NetworkBindingResult : int {
    Success         = 0,
    Failure         = 4294967295,
    NotImplemented  = 4294967294,
    AddressNotFound = 4294967293,
    NetworkChanged  = 4294967292,
};

}
