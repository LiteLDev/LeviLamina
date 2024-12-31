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
namespace rtc { class AsyncPacketSocket; }
namespace rtc { class Socket; }
namespace rtc { class SocketAddress; }
namespace sigslot { class single_threaded; }
// clang-format on

namespace NetherNet {

class TcpClientSignalingInterfaceImpl : public ::NetherNet::TcpSignalingInterfaceBase {
public:
    // TcpClientSignalingInterfaceImpl inner types declare
    // clang-format off
    struct ClientHandshake;
    // clang-format on

    // TcpClientSignalingInterfaceImpl inner types define
    struct ClientHandshake : public ::sigslot::has_slots<::sigslot::single_threaded> {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 48> mUnk82dcf2;
        ::ll::UntypedStorage<8, 48> mUnkba5a34;
        ::ll::UntypedStorage<8, 8>  mUnkb38d8c;
        // NOLINTEND

    public:
        // prevent constructor by default
        ClientHandshake& operator=(ClientHandshake const&);
        ClientHandshake(ClientHandshake const&);
        ClientHandshake();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~ClientHandshake() /*override*/;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::std::error_code Connect(::std::unique_ptr<::rtc::Socket> socket, ::rtc::SocketAddress const&);

        MCAPI void OnClose(::rtc::AsyncPacketSocket*, int status);

        MCAPI void OnConnect(::rtc::AsyncPacketSocket*);
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
    ::ll::UntypedStorage<8, 64> mUnk8bb762;
    // NOLINTEND

public:
    // prevent constructor by default
    TcpClientSignalingInterfaceImpl& operator=(TcpClientSignalingInterfaceImpl const&);
    TcpClientSignalingInterfaceImpl(TcpClientSignalingInterfaceImpl const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TcpClientSignalingInterfaceImpl() /*override*/ = default;

    // vIndex: 0
    virtual void
    SignIn(::std::function<void(::std::error_code)> const& signInCallback, ::std::function<void(::NetherNet::SignalingHostConnectionStatus, uint)> const&, ::NetherNet::IWebRTCSignalingInterface::SignalingConfiguration const&) /*override*/
        ;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void OnHandshakeComplete(
        ::NetherNet::TcpClientSignalingInterfaceImpl::ClientHandshake* pHandshake,
        ::NetherNet::NetworkID                                         id
    );

    MCAPI void OnHandshakeFailed(
        ::NetherNet::TcpClientSignalingInterfaceImpl::ClientHandshake* pHandshake,
        ::std::error_code                                              error
    );

    MCAPI TcpClientSignalingInterfaceImpl();
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
