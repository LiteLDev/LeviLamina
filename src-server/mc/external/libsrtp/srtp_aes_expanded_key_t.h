#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct srtp_aes_expanded_key_t {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 240> mUnk818f70;
    ::ll::UntypedStorage<4, 4>   mUnk727865;
    // NOLINTEND

public:
    // prevent constructor by default
    srtp_aes_expanded_key_t& operator=(srtp_aes_expanded_key_t const&);
    srtp_aes_expanded_key_t(srtp_aes_expanded_key_t const&);
    srtp_aes_expanded_key_t();
};
