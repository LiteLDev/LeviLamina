#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/AsyncTCPSocketBase.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Socket; }
namespace rtc { struct PacketOptions; }
// clang-format on

namespace rtc {

class AsyncTCPSocket : public ::rtc::AsyncTCPSocketBase {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AsyncTCPSocket() /*override*/ = default;

    // vIndex: 3
    virtual int Send(void const*, uint64, ::rtc::PacketOptions const&) /*override*/;

    // vIndex: 11
    virtual uint64 ProcessInput(::rtc::ArrayView<uchar const>) /*override*/;
    // NOLINTEND

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
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
