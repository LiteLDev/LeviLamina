#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/deps/nether_net/IWebRTCSignalingInterface.h"
#include "mc/deps/nether_net/utils/EnableSharedFromThis.h"
#include "mc/external/sigslot/has_slots.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace NetherNet { struct ISignalingEventHandler; }
namespace NetherNet { struct NetworkID; }
namespace rtc { class AsyncPacketSocket; }
namespace sigslot { class single_threaded; }
// clang-format on

namespace NetherNet {

class TcpSignalingInterfaceBase : public ::NetherNet::IWebRTCSignalingInterface,
                                  public ::sigslot::has_slots<::sigslot::single_threaded>,
                                  public ::NetherNet::EnableSharedFromThis<::NetherNet::TcpSignalingInterfaceBase> {
public:
    // TcpSignalingInterfaceBase inner types declare
    // clang-format off
    class Peer;
    // clang-format on

    // TcpSignalingInterfaceBase inner types define
    class Peer : public ::sigslot::has_slots<::sigslot::single_threaded> {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 48> mUnk5f7cc6;
        ::ll::UntypedStorage<8, 48> mUnk8a97b1;
        ::ll::UntypedStorage<8, 8>  mUnkde7d1e;
        ::ll::UntypedStorage<8, 8>  mUnk406305;
        // NOLINTEND

    public:
        // prevent constructor by default
        Peer& operator=(Peer const&);
        Peer(Peer const&);
        Peer();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~Peer() /*override*/;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCFOLD void OnClose(::rtc::AsyncPacketSocket*, int status);

        MCAPI Peer(::NetherNet::NetworkID id, ::std::unique_ptr<::rtc::AsyncPacketSocket> socket);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::NetherNet::NetworkID id, ::std::unique_ptr<::rtc::AsyncPacketSocket> socket);
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
    ::ll::UntypedStorage<8, 24>  mUnkfde063;
    ::ll::UntypedStorage<8, 128> mUnkf42008;
    // NOLINTEND

public:
    // prevent constructor by default
    TcpSignalingInterfaceBase& operator=(TcpSignalingInterfaceBase const&);
    TcpSignalingInterfaceBase(TcpSignalingInterfaceBase const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TcpSignalingInterfaceBase() /*override*/;

    // vIndex: 1
    virtual void SignOut() /*override*/;

    // vIndex: 2
    virtual bool IsSignedIn() const /*override*/;

    // vIndex: 3
    virtual void Update() /*override*/;

    // vIndex: 4
    virtual void
    SendSignal(::NetherNet::NetworkID to, char const* signal, uint size, ::std::function<void(::NetherNet::ESessionError)>&&) /*override*/
        ;

    // vIndex: 5
    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ISignalingEventHandler* handler
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void OnNewPeer(::NetherNet::NetworkID id, ::std::unique_ptr<::rtc::AsyncPacketSocket> socket);

    MCAPI void OnPeerClose(::NetherNet::TcpSignalingInterfaceBase::Peer* pPeer, ::std::error_code);

    MCAPI void OnPeerReceive(::NetherNet::NetworkID id, ::std::string_view data);

    MCAPI TcpSignalingInterfaceBase();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $SignOut();

    MCFOLD bool $IsSignedIn() const;

    MCFOLD void $Update();

    MCAPI void
    $SendSignal(::NetherNet::NetworkID to, char const* signal, uint size, ::std::function<void(::NetherNet::ESessionError)>&&);

    MCAPI ::Bedrock::PubSub::Subscription $RegisterEventHandler(::NetherNet::ISignalingEventHandler* handler);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForIWebRTCSignalingInterface();

    MCAPI static void** $vftableForHasSlots();
    // NOLINTEND
};

} // namespace NetherNet
