#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct srtp_auth_type_t {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb07194;
    ::ll::UntypedStorage<8, 8> mUnk5cb3e1;
    ::ll::UntypedStorage<8, 8> mUnk13c0e1;
    ::ll::UntypedStorage<8, 8> mUnke024b7;
    ::ll::UntypedStorage<8, 8> mUnk722548;
    ::ll::UntypedStorage<8, 8> mUnk44bf74;
    ::ll::UntypedStorage<8, 8> mUnk4c5b9d;
    ::ll::UntypedStorage<8, 8> mUnk4d8baa;
    ::ll::UntypedStorage<4, 4> mUnk844b6f;
    // NOLINTEND

public:
    // prevent constructor by default
    srtp_auth_type_t& operator=(srtp_auth_type_t const&);
    srtp_auth_type_t(srtp_auth_type_t const&);
    srtp_auth_type_t();

};
