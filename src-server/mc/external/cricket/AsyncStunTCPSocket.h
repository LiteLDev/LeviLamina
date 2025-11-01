#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/AsyncTCPSocketBase.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Socket; }
namespace rtc { struct PacketOptions; }
// clang-format on

namespace cricket {

class AsyncStunTCPSocket : public ::rtc::AsyncTCPSocketBase {
public:
    // prevent constructor by default
    AsyncStunTCPSocket();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual int Send(void const* data, uint64 len, ::rtc::PacketOptions const& options) /*override*/;

    // vIndex: 11
    virtual uint64 ProcessInput(::rtc::ArrayView<uchar const> data) /*override*/;

    // vIndex: 0
    virtual ~AsyncStunTCPSocket() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AsyncStunTCPSocket(::rtc::Socket* socket);

    MCNAPI uint64 GetExpectedLength(void const* data, uint64 len, int* pad_bytes);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::Socket* socket);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $Send(void const* data, uint64 len, ::rtc::PacketOptions const& options);

    MCNAPI uint64 $ProcessInput(::rtc::ArrayView<uchar const> data);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
