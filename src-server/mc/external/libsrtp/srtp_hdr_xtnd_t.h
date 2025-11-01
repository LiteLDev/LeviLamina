#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct srtp_hdr_xtnd_t {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk5390dd;
    ::ll::UntypedStorage<2, 2> mUnk252b4f;
    // NOLINTEND

public:
    // prevent constructor by default
    srtp_hdr_xtnd_t& operator=(srtp_hdr_xtnd_t const&);
    srtp_hdr_xtnd_t(srtp_hdr_xtnd_t const&);
    srtp_hdr_xtnd_t();

};
