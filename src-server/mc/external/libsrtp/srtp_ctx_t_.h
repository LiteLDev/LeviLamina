#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct srtp_ctx_t_ {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd3f27e;
    ::ll::UntypedStorage<8, 8> mUnkea2c33;
    ::ll::UntypedStorage<8, 8> mUnk56231d;
    // NOLINTEND

public:
    // prevent constructor by default
    srtp_ctx_t_& operator=(srtp_ctx_t_ const&);
    srtp_ctx_t_(srtp_ctx_t_ const&);
    srtp_ctx_t_();

};
