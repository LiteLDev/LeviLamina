#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class srtp_profile_t : int {
    Reserved        = 0,
    Aes128CmSha1_80 = 1,
    Aes128CmSha1_32 = 2,
    NullSha1_80     = 5,
    NullSha1_32     = 6,
    AeadAes128Gcm   = 7,
    AeadAes256Gcm   = 8,
};
