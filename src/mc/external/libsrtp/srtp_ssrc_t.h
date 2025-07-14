#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct srtp_ssrc_t {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk271902;
    ::ll::UntypedStorage<4, 4> mUnk1266c7;
    // NOLINTEND

public:
    // prevent constructor by default
    srtp_ssrc_t& operator=(srtp_ssrc_t const&);
    srtp_ssrc_t(srtp_ssrc_t const&);
    srtp_ssrc_t();
};
