#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/sigslot/has_slots.h"
#include "mc/external/sigslot/single_threaded.h"
#include "mc/external/webrtc/Socket.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class SocketAddress; }
// clang-format on

namespace webrtc {

class AsyncSocketAdapter : public ::webrtc::Socket, public ::sigslot::has_slots<::sigslot::single_threaded> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk12d4dc;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncSocketAdapter& operator=(AsyncSocketAdapter const&);
    AsyncSocketAdapter(AsyncSocketAdapter const&);
    AsyncSocketAdapter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::webrtc::SocketAddress GetLocalAddress() const /*override*/;

    virtual ::webrtc::SocketAddress GetRemoteAddress() const /*override*/;

    virtual int Bind(::webrtc::SocketAddress const& addr) /*override*/;

    virtual int Connect(::webrtc::SocketAddress const& addr) /*override*/;

    virtual int Send(void const* pv, uint64 cb) /*override*/;

    virtual int SendTo(void const* pv, uint64 cb, ::webrtc::SocketAddress const& addr) /*override*/;

    virtual int Recv(void* pv, uint64 cb, int64* timestamp) /*override*/;

    virtual int RecvFrom(void* pv, uint64 cb, ::webrtc::SocketAddress* paddr, int64* timestamp) /*override*/;

    virtual int Listen(int backlog) /*override*/;

    virtual ::webrtc::Socket* Accept(::webrtc::SocketAddress* paddr) /*override*/;

    virtual int Close() /*override*/;

    virtual int GetError() const /*override*/;

    virtual void SetError(int error) /*override*/;

    virtual ::webrtc::Socket::ConnState GetState() const /*override*/;

    virtual int GetOption(::webrtc::Socket::Option opt, int* value) /*override*/;

    virtual int SetOption(::webrtc::Socket::Option opt, int value) /*override*/;

    virtual void OnConnectEvent(::webrtc::Socket* socket);

    virtual void OnReadEvent(::webrtc::Socket* socket);

    virtual void OnWriteEvent(::webrtc::Socket* socket);

    virtual void OnCloseEvent(::webrtc::Socket* socket, int err);

    virtual ~AsyncSocketAdapter() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AsyncSocketAdapter(::webrtc::Socket* socket);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::Socket* socket);
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

    MCNAPI int $Bind(::webrtc::SocketAddress const& addr);

    MCNAPI int $Connect(::webrtc::SocketAddress const& addr);

    MCNAPI int $Send(void const* pv, uint64 cb);

    MCNAPI int $SendTo(void const* pv, uint64 cb, ::webrtc::SocketAddress const& addr);

    MCNAPI int $Recv(void* pv, uint64 cb, int64* timestamp);

    MCNAPI int $RecvFrom(void* pv, uint64 cb, ::webrtc::SocketAddress* paddr, int64* timestamp);

    MCNAPI int $Listen(int backlog);

    MCNAPI ::webrtc::Socket* $Accept(::webrtc::SocketAddress* paddr);

    MCNAPI int $Close();

    MCNAPI int $GetError() const;

    MCNAPI void $SetError(int error);

    MCNAPI ::webrtc::Socket::ConnState $GetState() const;

    MCNAPI int $GetOption(::webrtc::Socket::Option opt, int* value);

    MCNAPI int $SetOption(::webrtc::Socket::Option opt, int value);

    MCNAPI void $OnConnectEvent(::webrtc::Socket* socket);

    MCNAPI void $OnReadEvent(::webrtc::Socket* socket);

    MCNAPI void $OnWriteEvent(::webrtc::Socket* socket);

    MCNAPI void $OnCloseEvent(::webrtc::Socket* socket, int err);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForSocket();

    MCNAPI static void** $vftableForHasSlots();
    // NOLINTEND
};

} // namespace webrtc
