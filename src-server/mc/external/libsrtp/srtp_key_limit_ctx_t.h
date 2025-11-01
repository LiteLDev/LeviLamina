#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct srtp_key_limit_ctx_t {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkfcd52b;
    ::ll::UntypedStorage<4, 4> mUnk459fb0;
    // NOLINTEND

public:
    // prevent constructor by default
    srtp_key_limit_ctx_t& operator=(srtp_key_limit_ctx_t const&);
    srtp_key_limit_ctx_t(srtp_key_limit_ctx_t const&);
    srtp_key_limit_ctx_t();
};
