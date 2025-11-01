#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct srtp_aes_icm_ctx_t {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkd77172;
    ::ll::UntypedStorage<8, 16> mUnkb4193c;
    ::ll::UntypedStorage<8, 16> mUnk738ddb;
    ::ll::UntypedStorage<8, 248> mUnk52f59a;
    ::ll::UntypedStorage<4, 4> mUnk1adb5b;
    ::ll::UntypedStorage<4, 4> mUnk7c93e9;
    // NOLINTEND

public:
    // prevent constructor by default
    srtp_aes_icm_ctx_t& operator=(srtp_aes_icm_ctx_t const&);
    srtp_aes_icm_ctx_t(srtp_aes_icm_ctx_t const&);
    srtp_aes_icm_ctx_t();

};
