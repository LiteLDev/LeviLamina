#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/IWebRTCSignalingInterface.h"
#include "mc/deps/nether_net/SignalingHostConnectionStatus.h"
#include "mc/deps/nether_net/signaling/prototype/TcpSignalingInterfaceBase.h"
#include "mc/external/sigslot/has_slots.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { struct NetworkID; }
namespace rtc { class AsyncListenSocket; }
namespace rtc { class AsyncPacketSocket; }
namespace rtc { class ReceivedPacket; }
namespace rtc { class SocketFactory; }
namespace sigslot { class single_threaded; }
// clang-format on

namespace NetherNet {

class TcpServerSignalingInterfaceImpl : public ::NetherNet::TcpSignalingInterfaceBase {
public:
    // TcpServerSignalingInterfaceImpl inner types declare
    // clang-format off
    class ServerHandshake;
    // clang-format on

    // TcpServerSignalingInterfaceImpl inner types define
    class ServerHandshake : public ::sigslot::has_slots<::sigslot::single_threaded> {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 48> mUnkc52f00;
        ::ll::UntypedStorage<8, 48> mUnk5a4a4e;
        ::ll::UntypedStorage<8, 8>  mUnkebb123;
        // NOLINTEND

    public:
        // prevent constructor by default
        ServerHandshake& operator=(ServerHandshake const&);
        ServerHandshake(ServerHandshake const&);
        ServerHandshake();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~ServerHandshake() /*override*/;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void OnClose(::rtc::AsyncPacketSocket*, int status);

        MCAPI void OnPacket(::rtc::AsyncPacketSocket*, ::rtc::ReceivedPacket const& packet);

        MCAPI explicit ServerHandshake(::std::unique_ptr<::rtc::AsyncPacketSocket> socket);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::std::unique_ptr<::rtc::AsyncPacketSocket> socket);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkba9bf5;
    // NOLINTEND

public:
    // prevent constructor by default
    TcpServerSignalingInterfaceImpl& operator=(TcpServerSignalingInterfaceImpl const&);
    TcpServerSignalingInterfaceImpl(TcpServerSignalingInterfaceImpl const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TcpServerSignalingInterfaceImpl() /*override*/ = default;

    // vIndex: 0
    virtual void
    SignIn(::std::function<void(::std::error_code)> const& signInCallback, ::std::function<void(::NetherNet::SignalingHostConnectionStatus, uint)> const&, ::NetherNet::IWebRTCSignalingInterface::SignalingConfiguration const&) /*override*/
        ;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void OnHandshakeComplete(
        ::NetherNet::TcpServerSignalingInterfaceImpl::ServerHandshake* pHandshake,
        ::NetherNet::NetworkID                                         id
    );

    MCAPI void
    OnHandshakeFailed(::NetherNet::TcpServerSignalingInterfaceImpl::ServerHandshake* pHandshake, ::std::error_code);

    MCAPI void OnNewConnection(::rtc::AsyncListenSocket*, ::rtc::AsyncPacketSocket* client);

    MCAPI TcpServerSignalingInterfaceImpl();

    MCAPI void TryCreateListeningSocket(::rtc::SocketFactory& factory, ushort port);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void
    $SignIn(::std::function<void(::std::error_code)> const& signInCallback, ::std::function<void(::NetherNet::SignalingHostConnectionStatus, uint)> const&, ::NetherNet::IWebRTCSignalingInterface::SignalingConfiguration const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForIWebRTCSignalingInterface();

    MCAPI static void** $vftableForHasSlots();
    // NOLINTEND
};

} // namespace NetherNet
