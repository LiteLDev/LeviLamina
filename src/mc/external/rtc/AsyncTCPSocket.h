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
    // prevent constructor by default
    AsyncTCPSocket& operator=(AsyncTCPSocket const&);
    AsyncTCPSocket(AsyncTCPSocket const&);
    AsyncTCPSocket();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AsyncTCPSocket() /*override*/;

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
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $Send(void const*, uint64, ::rtc::PacketOptions const&);

    MCAPI uint64 $ProcessInput(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
