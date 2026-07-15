#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"
#include "mc/external/webrtc/AsyncPacketSocket.h"
#include "mc/external/webrtc/Socket.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Socket; }
namespace webrtc { class SocketAddress; }
namespace webrtc { struct AsyncSocketPacketOptions; }
// clang-format on

namespace webrtc {

class AsyncTCPSocketBase : public ::webrtc::AsyncPacketSocket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk69de25;
    ::ll::UntypedStorage<8, 24> mUnkc19074;
    ::ll::UntypedStorage<8, 24> mUnk911e86;
    ::ll::UntypedStorage<8, 8>  mUnk2436e6;
    ::ll::UntypedStorage<8, 8>  mUnk6c1390;
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

    virtual int Send(void const* pv, uint64 cb, ::webrtc::AsyncSocketPacketOptions const& options) = 0;

    virtual uint64 ProcessInput(::webrtc::ArrayView<uchar const, 18446744073709546905> data) = 0;

    virtual ::webrtc::SocketAddress GetLocalAddress() const /*override*/;

    virtual ::webrtc::SocketAddress GetRemoteAddress() const /*override*/;

    virtual int SendTo(
        void const*                               pv,
        uint64                                    cb,
        ::webrtc::SocketAddress const&            addr,
        ::webrtc::AsyncSocketPacketOptions const& options
    ) /*override*/;

    virtual int Close() /*override*/;

    virtual ::webrtc::AsyncPacketSocket::State GetState() const /*override*/;

    virtual int GetOption(::webrtc::Socket::Option opt, int* value) /*override*/;

    virtual int SetOption(::webrtc::Socket::Option opt, int value) /*override*/;

    virtual int GetError() const /*override*/;

    virtual void SetError(int error) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AppendToOutBuffer(void const* pv, uint64 cb);

    MCNAPI AsyncTCPSocketBase(::webrtc::Socket* socket, uint64 max_packet_size);

    MCNAPI int FlushOutBuffer();

    MCNAPI void OnCloseEvent(::webrtc::Socket* socket, int error);

    MCNAPI void OnConnectEvent(::webrtc::Socket* socket);

    MCNAPI void OnReadEvent(::webrtc::Socket* socket);

    MCNAPI void OnWriteEvent(::webrtc::Socket* socket);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::Socket* socket, uint64 max_packet_size);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::SocketAddress $GetLocalAddress() const;

    MCNAPI ::webrtc::SocketAddress $GetRemoteAddress() const;

    MCNAPI int $SendTo(
        void const*                               pv,
        uint64                                    cb,
        ::webrtc::SocketAddress const&            addr,
        ::webrtc::AsyncSocketPacketOptions const& options
    );

    MCNAPI int $Close();

    MCNAPI ::webrtc::AsyncPacketSocket::State $GetState() const;

    MCNAPI int $GetOption(::webrtc::Socket::Option opt, int* value);

    MCNAPI int $SetOption(::webrtc::Socket::Option opt, int value);

    MCNAPI int $GetError() const;

    MCNAPI void $SetError(int error);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
