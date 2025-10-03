#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class srtp_crypto_kernel_state_t : int {
    Insecure = 0,
    Secure   = 1,
};
