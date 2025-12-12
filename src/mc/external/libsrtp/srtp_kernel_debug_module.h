#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct srtp_kernel_debug_module {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk550017;
    ::ll::UntypedStorage<8, 8> mUnk9475ee;
    // NOLINTEND

public:
    // prevent constructor by default
    srtp_kernel_debug_module& operator=(srtp_kernel_debug_module const&);
    srtp_kernel_debug_module(srtp_kernel_debug_module const&);
    srtp_kernel_debug_module();
};
