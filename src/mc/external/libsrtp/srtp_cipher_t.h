#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct srtp_cipher_t {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk5c73e1;
    ::ll::UntypedStorage<8, 8> mUnk32d9b2;
    ::ll::UntypedStorage<4, 4> mUnkb11f9d;
    ::ll::UntypedStorage<4, 4> mUnk9bfb73;
    // NOLINTEND

public:
    // prevent constructor by default
    srtp_cipher_t& operator=(srtp_cipher_t const&);
    srtp_cipher_t(srtp_cipher_t const&);
    srtp_cipher_t();
};
