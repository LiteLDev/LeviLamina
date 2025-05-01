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
    MCNAPI void AppendToOutBuffer(void const*, uint64);

    MCNAPI AsyncTCPSocketBase(::rtc::Socket*, uint64);

    MCNAPI int FlushOutBuffer();

    MCNAPI void OnCloseEvent(::rtc::Socket*, int);

    MCNAPI void OnConnectEvent(::rtc::Socket*);

    MCNAPI void OnReadEvent(::rtc::Socket*);

    MCNAPI void OnWriteEvent(::rtc::Socket*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::Socket*, uint64);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
