#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/AsyncPacketSocket.h"
#include "mc/external/webrtc/Socket.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Socket; }
namespace webrtc { class SocketAddress; }
namespace webrtc { class UDPPort; }
namespace webrtc { struct AsyncSocketPacketOptions; }
// clang-format on

namespace webrtc {

class AsyncUDPSocket : public ::webrtc::AsyncPacketSocket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkde113d;
    ::ll::UntypedStorage<8, 8>  mUnk87a55f;
    ::ll::UntypedStorage<1, 1>  mUnk4c1928;
    ::ll::UntypedStorage<8, 24> mUnk8006d9;
    ::ll::UntypedStorage<8, 16> mUnkbbffc1;
    ::ll::UntypedStorage<8, 24> mUnkf2367d;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncUDPSocket& operator=(AsyncUDPSocket const&);
    AsyncUDPSocket(AsyncUDPSocket const&);
    AsyncUDPSocket();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AsyncUDPSocket() /*override*/ = default;

    virtual ::webrtc::SocketAddress GetLocalAddress() const /*override*/;

    virtual ::webrtc::SocketAddress GetRemoteAddress() const /*override*/;

    virtual int Send(void const* pv, uint64 cb, ::webrtc::AsyncSocketPacketOptions const& options) /*override*/;

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
    MCNAPI void AddOwner(::webrtc::UDPPort* owner);

    MCNAPI explicit AsyncUDPSocket(::webrtc::Socket* socket);

    MCNAPI void OnReadEvent(::webrtc::Socket* socket);

    MCNAPI void OnWriteEvent(::webrtc::Socket* socket);

    MCNAPI void RemoveOwner(::webrtc::UDPPort* owner);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::Socket* socket);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::SocketAddress $GetLocalAddress() const;

    MCNAPI ::webrtc::SocketAddress $GetRemoteAddress() const;

    MCNAPI int $Send(void const* pv, uint64 cb, ::webrtc::AsyncSocketPacketOptions const& options);

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
