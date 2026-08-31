#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/sigslot/has_slots.h"
#include "mc/external/sigslot/single_threaded.h"
#include "mc/external/webrtc/Connection.h"
#include "mc/external/webrtc/WeakPtr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AsyncPacketSocket; }
namespace webrtc { class Candidate; }
namespace webrtc { class Environment; }
namespace webrtc { class Port; }
namespace webrtc { class StunMessage; }
namespace webrtc { class StunRequest; }
namespace webrtc { struct AsyncSocketPacketOptions; }
namespace webrtc { struct SentPacketInfo; }
// clang-format on

namespace webrtc {

class TCPConnection : public ::webrtc::Connection, public ::sigslot::has_slots<::sigslot::single_threaded> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkaa1118;
    ::ll::UntypedStorage<4, 4> mUnkb9e5d9;
    ::ll::UntypedStorage<1, 1> mUnk7eaf2d;
    ::ll::UntypedStorage<1, 1> mUnka159d9;
    ::ll::UntypedStorage<1, 1> mUnke653cb;
    ::ll::UntypedStorage<4, 4> mUnk9c3a94;
    ::ll::UntypedStorage<8, 8> mUnk5a7af8;
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

    virtual int Send(void const* data, uint64 size, ::webrtc::AsyncSocketPacketOptions const& options) /*override*/;

    virtual int GetError() /*override*/;

    virtual void OnConnectionRequestResponse(::webrtc::StunRequest* req, ::webrtc::StunMessage* response) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void ConnectSocketSignals(::webrtc::AsyncPacketSocket* socket);

    MCNAPI void CreateOutgoingTcpSocket();

    MCNAPI void DisconnectSocketSignals(::webrtc::AsyncPacketSocket* socket);

    MCNAPI void MaybeReconnect();

    MCNAPI void OnClose(::webrtc::AsyncPacketSocket* socket, int error);

    MCNAPI void OnConnect(::webrtc::AsyncPacketSocket* socket);

    MCNAPI void OnDestroyed(::webrtc::Connection* c);

    MCNAPI void OnReadyToSend(::webrtc::AsyncPacketSocket* socket);

    MCNAPI void OnSentPacket(::webrtc::AsyncPacketSocket* socket, ::webrtc::SentPacketInfo const& sent_packet);

    MCNAPI TCPConnection(
        ::webrtc::Environment const&      env,
        ::webrtc::WeakPtr<::webrtc::Port> tcp_port,
        ::webrtc::Candidate const&        candidate,
        ::webrtc::AsyncPacketSocket*      socket
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::Environment const&      env,
        ::webrtc::WeakPtr<::webrtc::Port> tcp_port,
        ::webrtc::Candidate const&        candidate,
        ::webrtc::AsyncPacketSocket*      socket
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $Send(void const* data, uint64 size, ::webrtc::AsyncSocketPacketOptions const& options);

    MCNAPI int $GetError();

    MCNAPI void $OnConnectionRequestResponse(::webrtc::StunRequest* req, ::webrtc::StunMessage* response);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForConnection();

    MCNAPI static void** $vftableForHasSlots();
    // NOLINTEND
};

} // namespace webrtc
