#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct srtp_rdbx_t {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk754d71;
    ::ll::UntypedStorage<8, 16> mUnk474423;
    // NOLINTEND

public:
    // prevent constructor by default
    srtp_rdbx_t& operator=(srtp_rdbx_t const&);
    srtp_rdbx_t(srtp_rdbx_t const&);
    srtp_rdbx_t();
};
