#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Socket; }
// clang-format on

namespace rtc {

class AsyncTCPSocketBase {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI void AppendToOutBuffer(void const*, uint64);

    MCAPI AsyncTCPSocketBase(::rtc::Socket*, uint64);

    MCAPI int FlushOutBuffer();

    MCAPI void OnCloseEvent(::rtc::Socket*, int);

    MCAPI void OnConnectEvent(::rtc::Socket*);

    MCAPI void OnReadEvent(::rtc::Socket*);

    MCAPI void OnWriteEvent(::rtc::Socket*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::rtc::Socket*, uint64);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
