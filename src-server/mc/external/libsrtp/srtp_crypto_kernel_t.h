#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct srtp_crypto_kernel_t {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk8cec89;
    ::ll::UntypedStorage<8, 8> mUnk359d46;
    ::ll::UntypedStorage<8, 8> mUnkd1a6d2;
    ::ll::UntypedStorage<8, 8> mUnk8eb83b;
    // NOLINTEND

public:
    // prevent constructor by default
    srtp_crypto_kernel_t& operator=(srtp_crypto_kernel_t const&);
    srtp_crypto_kernel_t(srtp_crypto_kernel_t const&);
    srtp_crypto_kernel_t();

};
