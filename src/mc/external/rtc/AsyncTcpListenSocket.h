#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Socket; }
// clang-format on

namespace rtc {

class AsyncTcpListenSocket {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AsyncTcpListenSocket(::std::unique_ptr<::rtc::Socket>);

    MCNAPI void OnReadEvent(::rtc::Socket*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::unique_ptr<::rtc::Socket>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
