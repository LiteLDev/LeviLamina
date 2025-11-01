#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

enum class SendPacketStatus : int {
    KSuccess = 0,
    KTemporaryFailure = 1,
    KError = 2,
};

}
