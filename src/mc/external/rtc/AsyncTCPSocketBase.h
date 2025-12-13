#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/AsyncPacketSocket.h"
#include "mc/external/rtc/Socket.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Socket; }
namespace rtc { class SocketAddress; }
namespace rtc { struct PacketOptions; }
// clang-format on

namespace rtc {

class AsyncTCPSocketBase : public ::rtc::AsyncPacketSocket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk744ef4;
    ::ll::UntypedStorage<8, 24> mUnke9e798;
    ::ll::UntypedStorage<8, 24> mUnkb68108;
    ::ll::UntypedStorage<8, 8>  mUnk169cb8;
    ::ll::UntypedStorage<8, 8>  mUnk921ceb;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncTCPSocketBase& operator=(AsyncTCPSocketBase const&);
    AsyncTCPSocketBase(AsyncTCPSocketBase const&);
    AsyncTCPSocketBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AsyncTCPSocketBase() /*override*/;

    virtual int Send(void const* data, uint64 len, ::rtc::PacketOptions const& options) = 0;

    virtual uint64 ProcessInput(::rtc::ArrayView<uchar const>) = 0;

    virtual ::rtc::SocketAddress GetLocalAddress() const /*override*/;

    virtual ::rtc::SocketAddress GetRemoteAddress() const /*override*/;

    virtual int SendTo(
        void const*                 pv,
        uint64                      cb,
        ::rtc::SocketAddress const& addr,
        ::rtc::PacketOptions const& options
    ) /*override*/;

    virtual int Close() /*override*/;

    virtual ::rtc::AsyncPacketSocket::State GetState() const /*override*/;

    virtual int GetOption(::rtc::Socket::Option opt, int* value) /*override*/;

    virtual int SetOption(::rtc::Socket::Option opt, int value) /*override*/;

    virtual int GetError() const /*override*/;

    virtual void SetError(int error) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AppendToOutBuffer(void const* pv, uint64 cb);

    MCNAPI AsyncTCPSocketBase(::rtc::Socket* socket, uint64 max_packet_size);

    MCNAPI int FlushOutBuffer();

    MCNAPI void OnCloseEvent(::rtc::Socket* socket, int error);

    MCNAPI void OnConnectEvent(::rtc::Socket* socket);

    MCNAPI void OnReadEvent(::rtc::Socket* socket);

    MCNAPI void OnWriteEvent(::rtc::Socket* socket);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::Socket* socket, uint64 max_packet_size);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::rtc::SocketAddress $GetLocalAddress() const;

    MCNAPI ::rtc::SocketAddress $GetRemoteAddress() const;

    MCNAPI int
    $SendTo(void const* pv, uint64 cb, ::rtc::SocketAddress const& addr, ::rtc::PacketOptions const& options);

    MCNAPI int $Close();

    MCNAPI ::rtc::AsyncPacketSocket::State $GetState() const;

    MCNAPI int $GetOption(::rtc::Socket::Option opt, int* value);

    MCNAPI int $SetOption(::rtc::Socket::Option opt, int value);

    MCNAPI int $GetError() const;

    MCNAPI void $SetError(int error);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
