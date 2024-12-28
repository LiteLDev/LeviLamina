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
    // vIndex: 1
    virtual ::rtc::AsyncListenSocket::State GetState() const /*override*/;

    // vIndex: 2
    virtual ::rtc::SocketAddress GetLocalAddress() const /*override*/;

    // vIndex: 3
    virtual void HandleIncomingConnection(::rtc::Socket*);

    // vIndex: 0
    virtual ~AsyncTcpListenSocket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit AsyncTcpListenSocket(::std::unique_ptr<::rtc::Socket>);

    MCAPI void OnReadEvent(::rtc::Socket*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::unique_ptr<::rtc::Socket>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::rtc::AsyncListenSocket::State $GetState() const;

    MCAPI ::rtc::SocketAddress $GetLocalAddress() const;

    MCAPI void $HandleIncomingConnection(::rtc::Socket*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
