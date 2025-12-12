#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/AsyncPacketSocket.h"
#include "mc/external/rtc/Socket.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class UDPPort; }
namespace rtc { class Socket; }
namespace rtc { class SocketAddress; }
namespace rtc { struct PacketOptions; }
// clang-format on

namespace rtc {

class AsyncUDPSocket : public ::rtc::AsyncPacketSocket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkf7e5ec;
    ::ll::UntypedStorage<8, 8>  mUnk5fd5db;
    ::ll::UntypedStorage<8, 24> mUnk5f11e8;
    ::ll::UntypedStorage<8, 16> mUnk5ac35d;
    ::ll::UntypedStorage<8, 24> mUnk7f2e95;
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

    virtual ::rtc::SocketAddress GetLocalAddress() const /*override*/;

    virtual ::rtc::SocketAddress GetRemoteAddress() const /*override*/;

    virtual int Send(void const* pv, uint64 cb, ::rtc::PacketOptions const& options) /*override*/;

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
    MCNAPI void AddOwner(::cricket::UDPPort* owner);

    MCNAPI explicit AsyncUDPSocket(::rtc::Socket* socket);

    MCNAPI void OnReadEvent(::rtc::Socket* socket);

    MCNAPI void OnWriteEvent(::rtc::Socket* socket);

    MCNAPI void RemoveOwner(::cricket::UDPPort* owner);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::Socket* socket);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::rtc::SocketAddress $GetLocalAddress() const;

    MCNAPI ::rtc::SocketAddress $GetRemoteAddress() const;

    MCNAPI int $Send(void const* pv, uint64 cb, ::rtc::PacketOptions const& options);

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
