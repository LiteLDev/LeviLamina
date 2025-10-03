#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class srtp_err_reporting_level_t : int {
    Error   = 0,
    Warning = 1,
    Info    = 2,
    Debug   = 3,
};
