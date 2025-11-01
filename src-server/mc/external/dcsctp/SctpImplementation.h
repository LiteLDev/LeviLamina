#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

enum class SctpImplementation : int {
    KUnknown = 0,
    KDcsctp = 1,
    KUsrSctp = 2,
    KOther = 3,
};

}
