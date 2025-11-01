#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class srtp_key_state_t : int {
    Normal = 0,
    PastSoftLimit = 1,
    Expired = 2,
};
