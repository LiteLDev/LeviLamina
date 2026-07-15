#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"
#include "mc/external/webrtc/AsyncTCPSocketBase.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Socket; }
namespace webrtc { struct AsyncSocketPacketOptions; }
// clang-format on

namespace webrtc {

class AsyncTCPSocket : public ::webrtc::AsyncTCPSocketBase {
public:
    // prevent constructor by default
    AsyncTCPSocket();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AsyncTCPSocket() /*override*/ = default;

    virtual int Send(void const* pv, uint64 cb, ::webrtc::AsyncSocketPacketOptions const& options) /*override*/;

    virtual uint64 ProcessInput(::webrtc::ArrayView<uchar const, 18446744073709546905> data) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AsyncTCPSocket(::webrtc::Socket* socket);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::Socket* socket);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $Send(void const* pv, uint64 cb, ::webrtc::AsyncSocketPacketOptions const& options);

    MCNAPI uint64 $ProcessInput(::webrtc::ArrayView<uchar const, 18446744073709546905> data);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
