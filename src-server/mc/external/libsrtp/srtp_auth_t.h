#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct srtp_auth_t {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk8e7c0d;
    ::ll::UntypedStorage<8, 8> mUnkb4539c;
    ::ll::UntypedStorage<4, 4> mUnkad3bad;
    ::ll::UntypedStorage<4, 4> mUnkeaceee;
    ::ll::UntypedStorage<4, 4> mUnk6dac94;
    // NOLINTEND

public:
    // prevent constructor by default
    srtp_auth_t& operator=(srtp_auth_t const&);
    srtp_auth_t(srtp_auth_t const&);
    srtp_auth_t();

};
