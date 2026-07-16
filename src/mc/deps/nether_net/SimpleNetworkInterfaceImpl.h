#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ContextProxy.h"
#include "mc/deps/nether_net/ESendType.h"
#include "mc/deps/nether_net/ILanEventHandler.h"
#include "mc/deps/nether_net/INetherNetTransportInterface.h"
#include "mc/deps/nether_net/ISignalingEventHandler.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace NetherNet { class IIdentityAssertionGenerator; }
namespace NetherNet { class INetherNetTransportInterfaceCallbacks; }
namespace NetherNet { class ISignalingInterface; }
namespace NetherNet { struct NetworkID; }
namespace NetherNet { struct SessionState; }
namespace NetherNet { struct StunRelayServer; }
namespace NetherNet { struct TransportConfiguration; }
namespace NetherNet::LanEvents { struct DiscoveryRequest; }
namespace NetherNet::LanEvents { struct DiscoveryResponse; }
namespace NetherNet::LanEvents { struct MessageReceived; }
namespace NetherNet::SignalingEvents { struct MessageReceived; }
// clang-format on

namespace NetherNet {

class SimpleNetworkInterfaceImpl : public ::NetherNet::ContextProxy,
                                   public ::NetherNet::INetherNetTransportInterface,
                                   public ::NetherNet::ISignalingEventHandler,
                                   public ::NetherNet::ILanEventHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnka9f77d;
    ::ll::UntypedStorage<8, 8>   mUnk960909;
    ::ll::UntypedStorage<8, 24>  mUnk17a828;
    ::ll::UntypedStorage<8, 8>   mUnk407f9c;
    ::ll::UntypedStorage<8, 8>   mUnkb5d73e;
    ::ll::UntypedStorage<8, 80>  mUnka71ac8;
    ::ll::UntypedStorage<8, 416> mUnkcf1ee0;
    ::ll::UntypedStorage<1, 1>   mUnk49643d;
    ::ll::UntypedStorage<1, 1>   mUnkbea55f;
    ::ll::UntypedStorage<8, 16>  mUnk6e9a1e;
    ::ll::UntypedStorage<8, 16>  mUnkd76d91;
    ::ll::UntypedStorage<8, 16>  mUnk9e7ad4;
    ::ll::UntypedStorage<8, 8>   mUnka1effb;
    ::ll::UntypedStorage<8, 8>   mUnk51d62d;
    // NOLINTEND

public:
    // prevent constructor by default
    SimpleNetworkInterfaceImpl& operator=(SimpleNetworkInterfaceImpl const&);
    SimpleNetworkInterfaceImpl(SimpleNetworkInterfaceImpl const&);
    SimpleNetworkInterfaceImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SimpleNetworkInterfaceImpl() /*override*/ = default;

    virtual bool SendPacket(::NetherNet::NetworkID, uint64, ::std::string const&, ::NetherNet::ESendType) /*override*/;

    virtual bool IsPacketAvailable(::NetherNet::NetworkID, uint64, uint*) /*override*/;

    virtual bool ReadPacket(::NetherNet::NetworkID, uint64, void*, uint, uint*) /*override*/;

    virtual bool OpenSessionWithUser(
        ::NetherNet::NetworkID,
        ::std::shared_ptr<::NetherNet::IIdentityAssertionGenerator>
    ) /*override*/;

    virtual bool CloseSessionWithUser(::NetherNet::NetworkID, uint64) /*override*/;

    virtual bool GetSessionState(::NetherNet::NetworkID, uint64, ::NetherNet::SessionState*) /*override*/;

    virtual void SetSignalingInterface(::std::shared_ptr<::NetherNet::ISignalingInterface> const&) /*override*/;

    virtual void SetRelayConfig(::std::vector<::NetherNet::StunRelayServer> const&) /*override*/;

    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ISignalingEventHandler*) /*override*/;

    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ILanEventHandler*) /*override*/;

    virtual bool IsBroadcastDiscoveryEnabled() /*override*/;

    virtual void EnableBroadcastDiscovery() /*override*/;

    virtual void DisableBroadcastDiscovery() /*override*/;

    virtual void AddLanHost(::NetherNet::NetworkID, ::std::string const&, int) /*override*/;

    virtual void RemoveLanHost(::NetherNet::NetworkID) /*override*/;

    virtual void EnableLANSignaling() /*override*/;

    virtual void DisableLANSignaling() /*override*/;

    virtual void EnableTrickleIce() /*override*/;

    virtual void DisableTrickleIce() /*override*/;

    virtual void OnSignalingEvent(::NetherNet::SignalingEvents::MessageReceived const&) /*override*/;

    virtual void OnLanEvent(::NetherNet::LanEvents::MessageReceived const&) /*override*/;

    virtual void OnLanEvent(::NetherNet::LanEvents::DiscoveryRequest const&) /*override*/;

    virtual void OnLanEvent(::NetherNet::LanEvents::DiscoveryResponse const&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Finalize();

    MCNAPI void Initialize(::NetherNet::INetherNetTransportInterfaceCallbacks* pCallbacks);

    MCNAPI SimpleNetworkInterfaceImpl(
        ::NetherNet::ContextProxy const&           ctx,
        ::NetherNet::NetworkID const&              networkID,
        ::NetherNet::TransportConfiguration const& configuration
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::NetherNet::ContextProxy const&           ctx,
        ::NetherNet::NetworkID const&              networkID,
        ::NetherNet::TransportConfiguration const& configuration
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace NetherNet
