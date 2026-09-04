#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/sigslot/has_slots.h"
#include "mc/external/sigslot/single_threaded.h"
#include "mc/external/webrtc/Socket.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class PhysicalSocketServer; }
namespace webrtc { class SocketAddress; }
// clang-format on

namespace webrtc {

class PhysicalSocket : public ::webrtc::Socket, public ::sigslot::has_slots<::sigslot::single_threaded> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk490cec;
    ::ll::UntypedStorage<8, 8>  mUnk260dba;
    ::ll::UntypedStorage<1, 1>  mUnkff94eb;
    ::ll::UntypedStorage<4, 4>  mUnk8b4b60;
    ::ll::UntypedStorage<8, 40> mUnkb735db;
    ::ll::UntypedStorage<4, 4>  mUnk1f8ce7;
    ::ll::UntypedStorage<4, 4>  mUnk980c93;
    ::ll::UntypedStorage<8, 8>  mUnk75eeb3;
    ::ll::UntypedStorage<1, 1>  mUnkab46d3;
    ::ll::UntypedStorage<1, 1>  mUnk41fc38;
    ::ll::UntypedStorage<1, 1>  mUnk1fd5ca;
    // NOLINTEND

public:
    // prevent constructor by default
    PhysicalSocket& operator=(PhysicalSocket const&);
    PhysicalSocket(PhysicalSocket const&);
    PhysicalSocket();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PhysicalSocket() /*override*/;

    virtual bool Create(int family, int type);

    virtual ::webrtc::SocketAddress GetLocalAddress() const /*override*/;

    virtual ::webrtc::SocketAddress GetRemoteAddress() const /*override*/;

    virtual int Bind(::webrtc::SocketAddress const& bind_addr) /*override*/;

    virtual int Connect(::webrtc::SocketAddress const& addr) /*override*/;

    virtual int GetError() const /*override*/;

    virtual void SetError(int error) /*override*/;

    virtual ::webrtc::Socket::ConnState GetState() const /*override*/;

    virtual int GetOption(::webrtc::Socket::Option opt, int* value) /*override*/;

    virtual int SetOption(::webrtc::Socket::Option opt, int value) /*override*/;

    virtual int Send(void const* pv, uint64 cb) /*override*/;

    virtual int SendTo(void const* buffer, uint64 length, ::webrtc::SocketAddress const& addr) /*override*/;

    virtual int Recv(void* buffer, uint64 length, int64* timestamp) /*override*/;

    virtual int RecvFrom(::webrtc::Socket::ReceiveBuffer& buffer) /*override*/;

    virtual int RecvFrom(void* buffer, uint64 length, ::webrtc::SocketAddress* out_addr, int64* timestamp) /*override*/;

    virtual int Listen(int backlog) /*override*/;

    virtual ::webrtc::Socket* Accept(::webrtc::SocketAddress* out_addr) /*override*/;

    virtual int Close() /*override*/;

    virtual uint64 DoAccept(uint64 socket, ::sockaddr* addr, int* addrlen);

    virtual int DoSend(uint64 socket, char const* buf, int len, int flags);

    virtual int DoSendTo(uint64 socket, char const* buf, int len, int flags, ::sockaddr const* dest_addr, int addrlen);

    virtual void SetEnabledEvents(uchar events);

    virtual void EnableEvents(uchar events);

    virtual void DisableEvents(uchar events);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int DoConnect(::webrtc::SocketAddress const& connect_addr);

    MCNAPI PhysicalSocket(::webrtc::PhysicalSocketServer* ss, uint64 s);

    MCNAPI int SetOption(::webrtc::Socket::Option opt, void const* value, uint64 size);

    MCNAPI int TranslateOption(::webrtc::Socket::Option opt, int* slevel, int* sopt);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::PhysicalSocketServer* ss, uint64 s);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $Create(int family, int type);

    MCNAPI ::webrtc::SocketAddress $GetLocalAddress() const;

    MCNAPI ::webrtc::SocketAddress $GetRemoteAddress() const;

    MCNAPI int $Bind(::webrtc::SocketAddress const& bind_addr);

    MCNAPI int $Connect(::webrtc::SocketAddress const& addr);

    MCNAPI int $GetError() const;

    MCNAPI void $SetError(int error);

    MCNAPI ::webrtc::Socket::ConnState $GetState() const;

    MCNAPI int $GetOption(::webrtc::Socket::Option opt, int* value);

    MCNAPI int $SetOption(::webrtc::Socket::Option opt, int value);

    MCNAPI int $Send(void const* pv, uint64 cb);

    MCNAPI int $SendTo(void const* buffer, uint64 length, ::webrtc::SocketAddress const& addr);

    MCNAPI int $Recv(void* buffer, uint64 length, int64* timestamp);

    MCNAPI int $RecvFrom(::webrtc::Socket::ReceiveBuffer& buffer);

    MCNAPI int $RecvFrom(void* buffer, uint64 length, ::webrtc::SocketAddress* out_addr, int64* timestamp);

    MCNAPI int $Listen(int backlog);

    MCNAPI ::webrtc::Socket* $Accept(::webrtc::SocketAddress* out_addr);

    MCNAPI int $Close();

    MCNAPI uint64 $DoAccept(uint64 socket, ::sockaddr* addr, int* addrlen);

    MCNAPI int $DoSend(uint64 socket, char const* buf, int len, int flags);

    MCNAPI int $DoSendTo(uint64 socket, char const* buf, int len, int flags, ::sockaddr const* dest_addr, int addrlen);

    MCNAPI void $SetEnabledEvents(uchar events);

    MCNAPI void $EnableEvents(uchar events);

    MCNAPI void $DisableEvents(uchar events);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForSocket();

    MCNAPI static void** $vftableForHasSlots();
    // NOLINTEND
};

} // namespace webrtc
