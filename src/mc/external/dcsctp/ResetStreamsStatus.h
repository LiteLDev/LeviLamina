#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

enum class ResetStreamsStatus : int {
    KNotConnected = 0,
    KPerformed    = 1,
    KNotSupported = 2,
};

}
