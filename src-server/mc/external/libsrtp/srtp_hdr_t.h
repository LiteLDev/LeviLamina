#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct srtp_hdr_t {
public:
    // member variables
    // NOLINTBEGIN
    uchar mUnk3e04c4 : 4;
    uchar mUnkadd1af : 1;
    uchar mUnkc9cc37 : 1;
    uchar mUnka87524 : 2;
    uchar mUnk83964f : 7;
    uchar mUnk95f576 : 1;
    ::ll::UntypedStorage<2, 2> mUnk6fc5dd;
    ::ll::UntypedStorage<4, 4> mUnka283b9;
    ::ll::UntypedStorage<4, 4> mUnke2701f;
    // NOLINTEND

public:
    // prevent constructor by default
    srtp_hdr_t& operator=(srtp_hdr_t const&);
    srtp_hdr_t(srtp_hdr_t const&);
    srtp_hdr_t();

};
