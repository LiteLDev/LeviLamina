#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/AsyncListenSocket.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Socket; }
namespace rtc { class SocketAddress; }
// clang-format on

namespace rtc {

class AsyncTcpListenSocket : public ::rtc::AsyncListenSocket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk41d212;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncTcpListenSocket& operator=(AsyncTcpListenSocket const&);
    AsyncTcpListenSocket(AsyncTcpListenSocket const&);
    AsyncTcpListenSocket();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::rtc::AsyncListenSocket::State GetState() const /*override*/;

    virtual ::rtc::SocketAddress GetLocalAddress() const /*override*/;

    virtual void HandleIncomingConnection(::rtc::Socket* socket);

    virtual ~AsyncTcpListenSocket() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AsyncTcpListenSocket(::std::unique_ptr<::rtc::Socket> socket);

    MCNAPI void OnReadEvent(::rtc::Socket* socket);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::unique_ptr<::rtc::Socket> socket);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::rtc::AsyncListenSocket::State $GetState() const;

    MCNAPI ::rtc::SocketAddress $GetLocalAddress() const;

    MCNAPI void $HandleIncomingConnection(::rtc::Socket* socket);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
