#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct srtp_debug_module_t {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnke024e7;
    ::ll::UntypedStorage<8, 8> mUnk57f264;
    // NOLINTEND

public:
    // prevent constructor by default
    srtp_debug_module_t& operator=(srtp_debug_module_t const&);
    srtp_debug_module_t(srtp_debug_module_t const&);
    srtp_debug_module_t();

};
