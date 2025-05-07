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

class AsyncUDPSocket : public ::rtc::AsyncPacketSocket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkf7e5ec;
    ::ll::UntypedStorage<8, 8>  mUnk5fd5db;
    ::ll::UntypedStorage<8, 24> mUnk5f11e8;
    ::ll::UntypedStorage<8, 16> mUnk5ac35d;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncUDPSocket& operator=(AsyncUDPSocket const&);
    AsyncUDPSocket(AsyncUDPSocket const&);
    AsyncUDPSocket();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AsyncUDPSocket() /*override*/ = default;

    // vIndex: 1
    virtual ::rtc::SocketAddress GetLocalAddress() const /*override*/;

    // vIndex: 2
    virtual ::rtc::SocketAddress GetRemoteAddress() const /*override*/;

    // vIndex: 3
    virtual int Send(void const*, uint64, ::rtc::PacketOptions const&) /*override*/;

    // vIndex: 4
    virtual int SendTo(void const*, uint64, ::rtc::SocketAddress const&, ::rtc::PacketOptions const&) /*override*/;

    // vIndex: 5
    virtual int Close() /*override*/;

    // vIndex: 6
    virtual ::rtc::AsyncPacketSocket::State GetState() const /*override*/;

    // vIndex: 7
    virtual int GetOption(::rtc::Socket::Option, int*) /*override*/;

    // vIndex: 8
    virtual int SetOption(::rtc::Socket::Option, int) /*override*/;

    // vIndex: 9
    virtual int GetError() const /*override*/;

    // vIndex: 10
    virtual void SetError(int) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AsyncUDPSocket(::rtc::Socket*);

    MCNAPI void OnReadEvent(::rtc::Socket*);

    MCNAPI void OnWriteEvent(::rtc::Socket*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::Socket*);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
