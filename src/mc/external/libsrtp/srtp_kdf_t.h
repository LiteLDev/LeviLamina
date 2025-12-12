#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct srtp_kdf_t {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk640c3f;
    // NOLINTEND

public:
    // prevent constructor by default
    srtp_kdf_t& operator=(srtp_kdf_t const&);
    srtp_kdf_t(srtp_kdf_t const&);
    srtp_kdf_t();
};
