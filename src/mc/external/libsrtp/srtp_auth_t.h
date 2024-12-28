#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct srtp_auth_t {
public:
    // prevent constructor by default
    srtp_auth_t& operator=(srtp_auth_t const&);
    srtp_auth_t(srtp_auth_t const&);
    srtp_auth_t();
};
