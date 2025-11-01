#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class srtp_sec_serv_t : int {
    None        = 0,
    Conf        = 1,
    Auth        = 2,
    ConfAndAuth = 3,
};
