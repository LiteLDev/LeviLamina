#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class srtp_cipher_direction_t : int {
    Encrypt = 0,
    Decrypt = 1,
    Any     = 2,
};
