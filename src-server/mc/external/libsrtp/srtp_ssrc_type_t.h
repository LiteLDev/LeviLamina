#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class srtp_ssrc_type_t : int {
    Undefined = 0,
    Specific = 1,
    AnyInbound = 2,
    AnyOutbound = 3,
};
