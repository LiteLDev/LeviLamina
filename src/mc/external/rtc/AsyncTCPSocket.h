#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Socket; }
// clang-format on

namespace rtc {

class AsyncTCPSocket {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit AsyncTCPSocket(::rtc::Socket*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::rtc::Socket*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
