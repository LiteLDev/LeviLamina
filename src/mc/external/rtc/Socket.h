#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class SocketAddress; }
// clang-format on

namespace rtc {

class Socket {
public:
    // Socket inner types declare
    // clang-format off
    struct ReceiveBuffer;
    // clang-format on

    // Socket inner types define
    struct ReceiveBuffer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk1d2bea;
        ::ll::UntypedStorage<8, 80> mUnkfdd128;
        ::ll::UntypedStorage<4, 4>  mUnkdad96f;
        ::ll::UntypedStorage<8, 8>  mUnk213b15;
        // NOLINTEND

    public:
        // prevent constructor by default
        ReceiveBuffer& operator=(ReceiveBuffer const&);
        ReceiveBuffer(ReceiveBuffer const&);
        ReceiveBuffer();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ReceiveBuffer();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    enum class ConnState : int {
        Closed     = 0,
        Connecting = 1,
        Connected  = 2,
    };

    enum class Option : int {
        Dontfragment      = 0,
        Rcvbuf            = 1,
        Sndbuf            = 2,
        Nodelay           = 3,
        Ipv6V6only        = 4,
        Dscp              = 5,
        RtpSendtimeExtnId = 6,
        SendEcn           = 7,
        RecvEcn           = 8,
        Keepalive         = 9,
        TcpKeepcnt        = 10,
        TcpKeepidle       = 11,
        TcpKeepintvl      = 12,
        TcpUserTimeout    = 13,
        Broadcast         = 14,
        Ipv6JoinGroup     = 15,
        Ipv6MulticastLoop = 16,
        Ipv6MulticastIf   = 17,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88> mUnk2097da;
    ::ll::UntypedStorage<8, 88> mUnk60f0a5;
    ::ll::UntypedStorage<8, 48> mUnkd40cf8;
    ::ll::UntypedStorage<8, 48> mUnk24406c;
    // NOLINTEND

public:
    // prevent constructor by default
    Socket& operator=(Socket const&);
    Socket(Socket const&);
    Socket();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Socket();

    // vIndex: 1
    virtual ::rtc::SocketAddress GetLocalAddress() const = 0;

    // vIndex: 2
    virtual ::rtc::SocketAddress GetRemoteAddress() const = 0;

    // vIndex: 3
    virtual int Bind(::rtc::SocketAddress const&) = 0;

    // vIndex: 4
    virtual int Connect(::rtc::SocketAddress const&) = 0;

    // vIndex: 5
    virtual int Send(void const*, uint64) = 0;

    // vIndex: 6
    virtual int SendTo(void const*, uint64, ::rtc::SocketAddress const&) = 0;

    // vIndex: 7
    virtual int Recv(void*, uint64, int64*) = 0;

    // vIndex: 9
    virtual int RecvFrom(void* pv, uint64 cb, ::rtc::SocketAddress* paddr, int64* timestamp);

    // vIndex: 8
    virtual int RecvFrom(::rtc::Socket::ReceiveBuffer& buffer);

    // vIndex: 10
    virtual int Listen(int) = 0;

    // vIndex: 11
    virtual ::rtc::Socket* Accept(::rtc::SocketAddress*) = 0;

    // vIndex: 12
    virtual int Close() = 0;

    // vIndex: 13
    virtual int GetError() const = 0;

    // vIndex: 14
    virtual void SetError(int) = 0;

    // vIndex: 15
    virtual ::rtc::Socket::ConnState GetState() const = 0;

    // vIndex: 16
    virtual int GetOption(::rtc::Socket::Option opt, int* value) = 0;

    // vIndex: 17
    virtual int SetOption(::rtc::Socket::Option, int) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $RecvFrom(void* pv, uint64 cb, ::rtc::SocketAddress* paddr, int64* timestamp);

    MCNAPI int $RecvFrom(::rtc::Socket::ReceiveBuffer& buffer);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
