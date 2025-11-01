#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/Socket.h"
#include "mc/external/sigslot/has_slots.h"
#include "mc/external/sigslot/single_threaded.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class SocketAddress; }
// clang-format on

namespace rtc {

class AsyncSocketAdapter : public ::rtc::Socket, public ::sigslot::has_slots<::sigslot::single_threaded> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk244603;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncSocketAdapter& operator=(AsyncSocketAdapter const&);
    AsyncSocketAdapter(AsyncSocketAdapter const&);
    AsyncSocketAdapter();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::rtc::SocketAddress GetLocalAddress() const /*override*/;

    // vIndex: 2
    virtual ::rtc::SocketAddress GetRemoteAddress() const /*override*/;

    // vIndex: 3
    virtual int Bind(::rtc::SocketAddress const& addr) /*override*/;

    // vIndex: 4
    virtual int Connect(::rtc::SocketAddress const& addr) /*override*/;

    // vIndex: 5
    virtual int Send(void const* pv, uint64 cb) /*override*/;

    // vIndex: 6
    virtual int SendTo(void const* pv, uint64 cb, ::rtc::SocketAddress const& addr) /*override*/;

    // vIndex: 7
    virtual int Recv(void* pv, uint64 cb, int64* timestamp) /*override*/;

    // vIndex: 9
    virtual int RecvFrom(void* pv, uint64 cb, ::rtc::SocketAddress* paddr, int64* timestamp) /*override*/;

    // vIndex: 10
    virtual int Listen(int backlog) /*override*/;

    // vIndex: 11
    virtual ::rtc::Socket* Accept(::rtc::SocketAddress* paddr) /*override*/;

    // vIndex: 12
    virtual int Close() /*override*/;

    // vIndex: 13
    virtual int GetError() const /*override*/;

    // vIndex: 14
    virtual void SetError(int error) /*override*/;

    // vIndex: 15
    virtual ::rtc::Socket::ConnState GetState() const /*override*/;

    // vIndex: 16
    virtual int GetOption(::rtc::Socket::Option opt, int* value) /*override*/;

    // vIndex: 17
    virtual int SetOption(::rtc::Socket::Option opt, int value) /*override*/;

    // vIndex: 18
    virtual void OnConnectEvent(::rtc::Socket* socket);

    // vIndex: 19
    virtual void OnReadEvent(::rtc::Socket* socket);

    // vIndex: 20
    virtual void OnWriteEvent(::rtc::Socket* socket);

    // vIndex: 21
    virtual void OnCloseEvent(::rtc::Socket* socket, int err);

    // vIndex: 0
    virtual ~AsyncSocketAdapter() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AsyncSocketAdapter(::rtc::Socket* socket);
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

    MCNAPI int $Bind(::rtc::SocketAddress const& addr);

    MCNAPI int $Connect(::rtc::SocketAddress const& addr);

    MCNAPI int $Send(void const* pv, uint64 cb);

    MCNAPI int $SendTo(void const* pv, uint64 cb, ::rtc::SocketAddress const& addr);

    MCNAPI int $Recv(void* pv, uint64 cb, int64* timestamp);

    MCNAPI int $RecvFrom(void* pv, uint64 cb, ::rtc::SocketAddress* paddr, int64* timestamp);

    MCNAPI int $Listen(int backlog);

    MCNAPI ::rtc::Socket* $Accept(::rtc::SocketAddress* paddr);

    MCNAPI int $Close();

    MCNAPI int $GetError() const;

    MCNAPI void $SetError(int error);

    MCNAPI ::rtc::Socket::ConnState $GetState() const;

    MCNAPI int $GetOption(::rtc::Socket::Option opt, int* value);

    MCNAPI int $SetOption(::rtc::Socket::Option opt, int value);

    MCNAPI void $OnConnectEvent(::rtc::Socket* socket);

    MCNAPI void $OnReadEvent(::rtc::Socket* socket);

    MCNAPI void $OnWriteEvent(::rtc::Socket* socket);

    MCNAPI void $OnCloseEvent(::rtc::Socket* socket, int err);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForSocket();

    MCNAPI static void** $vftableForHasSlots();
    // NOLINTEND

};

}
