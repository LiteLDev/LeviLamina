#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/BufferedReadAdapter.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Socket; }
namespace webrtc { class SocketAddress; }
// clang-format on

namespace webrtc {

class AsyncSSLSocket : public ::webrtc::BufferedReadAdapter {
public:
    // prevent constructor by default
    AsyncSSLSocket();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual int Connect(::webrtc::SocketAddress const& addr) /*override*/;

    virtual void OnConnectEvent(::webrtc::Socket* socket) /*override*/;

    virtual void ProcessInput(char* data, uint64* len) /*override*/;

    virtual ~AsyncSSLSocket() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AsyncSSLSocket(::webrtc::Socket* socket);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::Socket* socket);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $Connect(::webrtc::SocketAddress const& addr);

    MCNAPI void $OnConnectEvent(::webrtc::Socket* socket);

    MCNAPI void $ProcessInput(char* data, uint64* len);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForSocket();

    MCNAPI static void** $vftableForHasSlots();
    // NOLINTEND
};

} // namespace webrtc
