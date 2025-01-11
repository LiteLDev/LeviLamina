#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Socket; }
// clang-format on

namespace cricket {

class AsyncStunTCPSocket {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit AsyncStunTCPSocket(::rtc::Socket*);

    MCAPI uint64 GetExpectedLength(void const*, uint64, int*);
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

} // namespace cricket
