#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/EcnMarking.h"
#include "mc/external/rtc/Socket.h"
#include "mc/external/sigslot/has_slots.h"
#include "mc/external/sigslot/single_threaded.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class PhysicalSocketServer; }
namespace rtc { class SocketAddress; }
namespace webrtc { class AsyncDnsResolverResult; }
// clang-format on

namespace rtc {

class PhysicalSocket : public ::rtc::Socket, public ::sigslot::has_slots<::sigslot::single_threaded> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnke204df;
    ::ll::UntypedStorage<8, 8>  mUnk2e4eb5;
    ::ll::UntypedStorage<1, 1>  mUnka6b4c1;
    ::ll::UntypedStorage<4, 4>  mUnk83dbee;
    ::ll::UntypedStorage<8, 40> mUnkf4def3;
    ::ll::UntypedStorage<4, 4>  mUnkf530c5;
    ::ll::UntypedStorage<4, 4>  mUnkb6f68b;
    ::ll::UntypedStorage<8, 8>  mUnk52d5f8;
    ::ll::UntypedStorage<1, 1>  mUnk70aa9a;
    ::ll::UntypedStorage<1, 1>  mUnk80a24e;
    ::ll::UntypedStorage<1, 1>  mUnk5a5112;
    ::ll::UntypedStorage<1, 1>  mUnk8efe6c;
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

    virtual ::rtc::SocketAddress GetLocalAddress() const /*override*/;

    virtual ::rtc::SocketAddress GetRemoteAddress() const /*override*/;

    virtual int Bind(::rtc::SocketAddress const& bind_addr) /*override*/;

    virtual int Connect(::rtc::SocketAddress const& addr) /*override*/;

    virtual int GetError() const /*override*/;

    virtual void SetError(int error) /*override*/;

    virtual ::rtc::Socket::ConnState GetState() const /*override*/;

    virtual int GetOption(::rtc::Socket::Option opt, int* value) /*override*/;

    virtual int SetOption(::rtc::Socket::Option opt, int value) /*override*/;

    virtual int Send(void const* pv, uint64 cb) /*override*/;

    virtual int SendTo(void const* buffer, uint64 length, ::rtc::SocketAddress const& addr) /*override*/;

    virtual int Recv(void* buffer, uint64 length, int64* timestamp) /*override*/;

    virtual int RecvFrom(void* buffer, uint64 length, ::rtc::SocketAddress* out_addr, int64* timestamp) /*override*/;

    virtual int RecvFrom(::rtc::Socket::ReceiveBuffer& buffer) /*override*/;

    virtual int Listen(int backlog) /*override*/;

    virtual ::rtc::Socket* Accept(::rtc::SocketAddress* out_addr) /*override*/;

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
    MCNAPI int DoConnect(::rtc::SocketAddress const& connect_addr);

    MCNAPI int DoReadFromSocket(
        void*                 buffer,
        uint64                length,
        ::rtc::SocketAddress* out_addr,
        int64*                timestamp,
        ::rtc::EcnMarking*    ecn
    );

    MCNAPI void OnResolveResult(::webrtc::AsyncDnsResolverResult const& result);

    MCNAPI PhysicalSocket(::rtc::PhysicalSocketServer* ss, uint64 s);

    MCNAPI int SetOption(::rtc::Socket::Option opt, void const* value, uint64 size);

    MCNAPI int TranslateOption(::rtc::Socket::Option opt, int* slevel, int* sopt);

    MCNAPI void UpdateLastError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::PhysicalSocketServer* ss, uint64 s);
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

    MCNAPI ::rtc::SocketAddress $GetLocalAddress() const;

    MCNAPI ::rtc::SocketAddress $GetRemoteAddress() const;

    MCNAPI int $Bind(::rtc::SocketAddress const& bind_addr);

    MCNAPI int $Connect(::rtc::SocketAddress const& addr);

    MCNAPI int $GetError() const;

    MCNAPI void $SetError(int error);

    MCNAPI ::rtc::Socket::ConnState $GetState() const;

    MCNAPI int $GetOption(::rtc::Socket::Option opt, int* value);

    MCNAPI int $SetOption(::rtc::Socket::Option opt, int value);

    MCNAPI int $Send(void const* pv, uint64 cb);

    MCNAPI int $SendTo(void const* buffer, uint64 length, ::rtc::SocketAddress const& addr);

    MCNAPI int $Recv(void* buffer, uint64 length, int64* timestamp);

    MCNAPI int $RecvFrom(void* buffer, uint64 length, ::rtc::SocketAddress* out_addr, int64* timestamp);

    MCNAPI int $RecvFrom(::rtc::Socket::ReceiveBuffer& buffer);

    MCNAPI int $Listen(int backlog);

    MCNAPI ::rtc::Socket* $Accept(::rtc::SocketAddress* out_addr);

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

} // namespace rtc
