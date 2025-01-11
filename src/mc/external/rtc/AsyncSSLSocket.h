#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Socket; }
// clang-format on

namespace rtc {

class AsyncSSLSocket {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit AsyncSSLSocket(::rtc::Socket*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::rtc::Socket*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForSocket();

    MCAPI static void** $vftableForHasSlots();
    // NOLINTEND
};

} // namespace rtc
