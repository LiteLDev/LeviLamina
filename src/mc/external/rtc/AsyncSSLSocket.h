#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Socket; }
// clang-format on

namespace rtc {

class AsyncSSLSocket {
public:
    // prevent constructor by default
    AsyncSSLSocket();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AsyncSSLSocket(::rtc::Socket*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::Socket*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForSocket();

    MCNAPI static void** $vftableForHasSlots();
    // NOLINTEND
};

} // namespace rtc
