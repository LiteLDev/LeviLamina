#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/Connection.h"
#include "mc/external/rtc/WeakPtr.h"
#include "mc/external/sigslot/has_slots.h"
#include "mc/external/sigslot/single_threaded.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace cricket { class Port; }
namespace cricket { class StunMessage; }
namespace cricket { class StunRequest; }
namespace rtc { class AsyncPacketSocket; }
namespace rtc { struct PacketOptions; }
// clang-format on

namespace cricket {

class TCPConnection : public ::cricket::Connection, public ::sigslot::has_slots<::sigslot::single_threaded> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk2308f7;
    ::ll::UntypedStorage<4, 4> mUnk8ca25d;
    ::ll::UntypedStorage<1, 1> mUnka7b132;
    ::ll::UntypedStorage<1, 1> mUnk8a6d3a;
    ::ll::UntypedStorage<1, 1> mUnk3bd6ac;
    ::ll::UntypedStorage<4, 4> mUnk57a7d5;
    ::ll::UntypedStorage<8, 8> mUnk71a217;
    // NOLINTEND

public:
    // prevent constructor by default
    TCPConnection& operator=(TCPConnection const&);
    TCPConnection(TCPConnection const&);
    TCPConnection();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TCPConnection() /*override*/ = default;

    virtual int Send(void const* data, uint64 size, ::rtc::PacketOptions const& options) /*override*/;

    virtual int GetError() /*override*/;

    virtual void
    OnConnectionRequestResponse(::cricket::StunRequest* request, ::cricket::StunMessage* response) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void ConnectSocketSignals(::rtc::AsyncPacketSocket* socket);

    MCNAPI void CreateOutgoingTcpSocket();

    MCNAPI void MaybeReconnect();

    MCNAPI void OnClose(::rtc::AsyncPacketSocket* socket, int error);

    MCNAPI void OnConnect(::rtc::AsyncPacketSocket* socket);

    MCNAPI void OnDestroyed(::cricket::Connection* c);

    MCNAPI void OnReadyToSend(::rtc::AsyncPacketSocket* socket);

    MCNAPI TCPConnection(
        ::rtc::WeakPtr<::cricket::Port> tcp_port,
        ::cricket::Candidate const&     candidate,
        ::rtc::AsyncPacketSocket*       socket
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::rtc::WeakPtr<::cricket::Port> tcp_port,
        ::cricket::Candidate const&     candidate,
        ::rtc::AsyncPacketSocket*       socket
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $Send(void const* data, uint64 size, ::rtc::PacketOptions const& options);

    MCNAPI int $GetError();

    MCNAPI void $OnConnectionRequestResponse(::cricket::StunRequest* request, ::cricket::StunMessage* response);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForHasSlots();

    MCNAPI static void** $vftableForConnection();
    // NOLINTEND
};

} // namespace cricket
