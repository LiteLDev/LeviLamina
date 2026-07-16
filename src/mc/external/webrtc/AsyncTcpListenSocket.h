#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/AsyncListenSocket.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Socket; }
namespace webrtc { class SocketAddress; }
// clang-format on

namespace webrtc {

class AsyncTcpListenSocket : public ::webrtc::AsyncListenSocket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk3a450b;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncTcpListenSocket& operator=(AsyncTcpListenSocket const&);
    AsyncTcpListenSocket(AsyncTcpListenSocket const&);
    AsyncTcpListenSocket();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::webrtc::AsyncListenSocket::State GetState() const /*override*/;

    virtual ::webrtc::SocketAddress GetLocalAddress() const /*override*/;

    virtual void HandleIncomingConnection(::webrtc::Socket* socket);

    virtual ~AsyncTcpListenSocket() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AsyncTcpListenSocket(::std::unique_ptr<::webrtc::Socket> socket);

    MCNAPI void OnReadEvent(::webrtc::Socket* socket);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::unique_ptr<::webrtc::Socket> socket);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::AsyncListenSocket::State $GetState() const;

    MCNAPI ::webrtc::SocketAddress $GetLocalAddress() const;

    MCNAPI void $HandleIncomingConnection(::webrtc::Socket* socket);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
