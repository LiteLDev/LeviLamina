#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct srtp_sha1_ctx_t {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 20> mUnkb3b955;
    ::ll::UntypedStorage<4, 64> mUnk113cb9;
    ::ll::UntypedStorage<4, 4>  mUnk16426c;
    ::ll::UntypedStorage<4, 4>  mUnk42f0ec;
    // NOLINTEND

public:
    // prevent constructor by default
    srtp_sha1_ctx_t& operator=(srtp_sha1_ctx_t const&);
    srtp_sha1_ctx_t(srtp_sha1_ctx_t const&);
    srtp_sha1_ctx_t();
};
