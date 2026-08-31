#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class SocketAddress; }
// clang-format on

namespace webrtc {

class Socket {
public:
    // Socket inner types declare
    // clang-format off
    struct ReceiveBuffer;
    // clang-format on

    // Socket inner types define
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

    struct ReceiveBuffer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk65f069;
        ::ll::UntypedStorage<8, 80> mUnkd916f6;
        ::ll::UntypedStorage<4, 4>  mUnk96d7aa;
        ::ll::UntypedStorage<8, 8>  mUnk38a29c;
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

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88> mUnk90b6cc;
    ::ll::UntypedStorage<8, 88> mUnk757c34;
    ::ll::UntypedStorage<8, 48> mUnk90b6d7;
    ::ll::UntypedStorage<8, 48> mUnk345ea3;
    // NOLINTEND

public:
    // prevent constructor by default
    Socket& operator=(Socket const&);
    Socket(Socket const&);
    Socket();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Socket();

    virtual ::webrtc::SocketAddress GetLocalAddress() const = 0;

    virtual ::webrtc::SocketAddress GetRemoteAddress() const = 0;

    virtual int Bind(::webrtc::SocketAddress const& addr) = 0;

    virtual int Connect(::webrtc::SocketAddress const& addr) = 0;

    virtual int Send(void const* pv, uint64 cb) = 0;

    virtual int SendTo(void const* pv, uint64 cb, ::webrtc::SocketAddress const& addr) = 0;

    virtual int Recv(void* pv, uint64 cb, int64* timestamp) = 0;

    virtual int RecvFrom(void* pv, uint64 cb, ::webrtc::SocketAddress* paddr, int64* timestamp);

    virtual int RecvFrom(::webrtc::Socket::ReceiveBuffer& buffer);

    virtual int Listen(int backlog) = 0;

    virtual ::webrtc::Socket* Accept(::webrtc::SocketAddress* paddr) = 0;

    virtual int Close() = 0;

    virtual int GetError() const = 0;

    virtual void SetError(int error) = 0;

    virtual ::webrtc::Socket::ConnState GetState() const = 0;

    virtual int GetOption(::webrtc::Socket::Option opt, int* value) = 0;

    virtual int SetOption(::webrtc::Socket::Option opt, int value) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $RecvFrom(void* pv, uint64 cb, ::webrtc::SocketAddress* paddr, int64* timestamp);

    MCNAPI int $RecvFrom(::webrtc::Socket::ReceiveBuffer& buffer);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
