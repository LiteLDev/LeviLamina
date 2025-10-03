#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct srtp_kernel_auth_type {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkdd9131;
    ::ll::UntypedStorage<8, 8> mUnk826906;
    ::ll::UntypedStorage<8, 8> mUnk2a9a37;
    // NOLINTEND

public:
    // prevent constructor by default
    srtp_kernel_auth_type& operator=(srtp_kernel_auth_type const&);
    srtp_kernel_auth_type(srtp_kernel_auth_type const&);
    srtp_kernel_auth_type();
};
