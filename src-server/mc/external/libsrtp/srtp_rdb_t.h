#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct srtp_rdb_t {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk71ff6b;
    ::ll::UntypedStorage<8, 16> mUnk2a0fda;
    // NOLINTEND

public:
    // prevent constructor by default
    srtp_rdb_t& operator=(srtp_rdb_t const&);
    srtp_rdb_t(srtp_rdb_t const&);
    srtp_rdb_t();

};
