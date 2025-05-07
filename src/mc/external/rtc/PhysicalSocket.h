#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/EcnMarking.h"
#include "mc/external/rtc/Socket.h"
#include "mc/external/sigslot/has_slots.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class PhysicalSocketServer; }
namespace rtc { class SocketAddress; }
namespace sigslot { class single_threaded; }
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
    // vIndex: 0
    virtual ~PhysicalSocket() /*override*/ = default;

    // vIndex: 18
    virtual bool Create(int, int);

    // vIndex: 1
    virtual ::rtc::SocketAddress GetLocalAddress() const /*override*/;

    // vIndex: 2
    virtual ::rtc::SocketAddress GetRemoteAddress() const /*override*/;

    // vIndex: 3
    virtual int Bind(::rtc::SocketAddress const&) /*override*/;

    // vIndex: 4
    virtual int Connect(::rtc::SocketAddress const&) /*override*/;

    // vIndex: 13
    virtual int GetError() const /*override*/;

    // vIndex: 14
    virtual void SetError(int) /*override*/;

    // vIndex: 15
    virtual ::rtc::Socket::ConnState GetState() const /*override*/;

    // vIndex: 16
    virtual int GetOption(::rtc::Socket::Option, int*) /*override*/;

    // vIndex: 17
    virtual int SetOption(::rtc::Socket::Option, int) /*override*/;

    // vIndex: 5
    virtual int Send(void const*, uint64) /*override*/;

    // vIndex: 6
    virtual int SendTo(void const*, uint64, ::rtc::SocketAddress const&) /*override*/;

    // vIndex: 7
    virtual int Recv(void*, uint64, int64*) /*override*/;

    // vIndex: 9
    virtual int RecvFrom(void* pv, uint64 cb, ::rtc::SocketAddress* paddr, int64* timestamp) /*override*/;

    // vIndex: 8
    virtual int RecvFrom(::rtc::Socket::ReceiveBuffer&) /*override*/;

    // vIndex: 10
    virtual int Listen(int) /*override*/;

    // vIndex: 11
    virtual ::rtc::Socket* Accept(::rtc::SocketAddress*) /*override*/;

    // vIndex: 12
    virtual int Close() /*override*/;

    // vIndex: 19
    virtual uint64 DoAccept(uint64, ::sockaddr*, int*);

    // vIndex: 20
    virtual int DoSend(uint64, char const*, int, int);

    // vIndex: 21
    virtual int DoSendTo(uint64, char const*, int, int, ::sockaddr const*, int);

    // vIndex: 22
    virtual void SetEnabledEvents(uchar);

    // vIndex: 23
    virtual void EnableEvents(uchar);

    // vIndex: 24
    virtual void DisableEvents(uchar);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int DoConnect(::rtc::SocketAddress const&);

    MCNAPI int DoReadFromSocket(void*, uint64, ::rtc::SocketAddress*, int64*, ::rtc::EcnMarking*);

    MCNAPI void OnResolveResult(::webrtc::AsyncDnsResolverResult const&);

    MCNAPI PhysicalSocket(::rtc::PhysicalSocketServer*, uint64);

    MCNAPI int SetOption(::rtc::Socket::Option, void const*, uint64);

    MCNAPI int TranslateOption(::rtc::Socket::Option, int*, int*);

    MCNAPI void UpdateLastError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::PhysicalSocketServer*, uint64);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForSocket();

    MCNAPI static void** $vftableForHasSlots();
    // NOLINTEND
};

} // namespace rtc
