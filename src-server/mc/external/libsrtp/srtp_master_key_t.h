#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct srtp_master_key_t {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkdd6b99;
    ::ll::UntypedStorage<8, 8> mUnk5f12a6;
    ::ll::UntypedStorage<4, 4> mUnke7bb43;
    // NOLINTEND

public:
    // prevent constructor by default
    srtp_master_key_t& operator=(srtp_master_key_t const&);
    srtp_master_key_t(srtp_master_key_t const&);
    srtp_master_key_t();

};
