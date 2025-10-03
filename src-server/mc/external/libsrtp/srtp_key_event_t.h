#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class srtp_key_event_t : int {
    Normal    = 0,
    SoftLimit = 1,
    HardLimit = 2,
};
