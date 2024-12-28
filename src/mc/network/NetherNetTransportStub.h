#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ERelayServerConfigurationResult.h"
#include "mc/deps/nether_net/ESendType.h"
#include "mc/deps/nether_net/INetherNetTransportInterface.h"
#include "mc/deps/nether_net/IWebRTCSignalingInterface.h"
#include "mc/deps/nether_net/SignalingHostConnectionStatus.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace NetherNet { class IWebRTCSignalingInterface; }
namespace NetherNet { struct ILanEventHandler; }
namespace NetherNet { struct ISignalingEventHandler; }
namespace NetherNet { struct NetworkID; }
namespace NetherNet { struct SessionState; }
// clang-format on

struct NetherNetTransportStub : public ::NetherNet::INetherNetTransportInterface {
public:
    // prevent constructor by default
    NetherNetTransportStub& operator=(NetherNetTransportStub const&);
    NetherNetTransportStub(NetherNetTransportStub const&);
    NetherNetTransportStub();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetherNetTransportStub() /*override*/;

    // vIndex: 1
    virtual bool IsSignedIntoSignalingService() const /*override*/;

    // vIndex: 2
    virtual bool SendPacket(::NetherNet::NetworkID, uint64, char const*, uint, ::NetherNet::ESendType) /*override*/;

    // vIndex: 3
    virtual bool IsPacketAvailable(::NetherNet::NetworkID, uint64, uint*) /*override*/;

    // vIndex: 4
    virtual void ClearPacketData(::NetherNet::NetworkID, uint64) /*override*/;

    // vIndex: 5
    virtual bool ReadPacket(::NetherNet::NetworkID, uint64, void*, uint, uint*) /*override*/;

    // vIndex: 6
    virtual bool OpenSessionWithUser(::NetherNet::NetworkID) /*override*/;

    // vIndex: 7
    virtual bool CloseSessionWithUser(::NetherNet::NetworkID, uint64) /*override*/;

    // vIndex: 8
    virtual bool GetSessionState(::NetherNet::NetworkID, uint64, ::NetherNet::SessionState*) /*override*/;

    // vIndex: 9
    virtual void
    SetWebRTCSignalingInterface(::std::shared_ptr<::NetherNet::IWebRTCSignalingInterface> const&) /*override*/;

    // vIndex: 10
    virtual void
    SignIntoSignalingService(::std::function<void(::std::error_code)> const&, ::std::function<void(::NetherNet::SignalingHostConnectionStatus, uint)> const&, ::NetherNet::IWebRTCSignalingInterface::SignalingConfiguration const&) /*override*/
        ;

    // vIndex: 11
    virtual void SignOutFromSignalingService() /*override*/;

    // vIndex: 12
    virtual void
    RegisterRelayServerCredentialsReadyCallback(::std::function<void(::NetherNet::ERelayServerConfigurationResult
                                                )> const&) /*override*/;

    // vIndex: 13
    virtual bool IsBroadcastDiscoveryEnabled() /*override*/;

    // vIndex: 14
    virtual void EnableBroadcastDiscovery() /*override*/;

    // vIndex: 15
    virtual void DisableBroadcastDiscovery() /*override*/;

    // vIndex: 16
    virtual void EnableSignalingOverLAN() /*override*/;

    // vIndex: 17
    virtual void DisableSignalingOverLAN() /*override*/;

    // vIndex: 19
    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ISignalingEventHandler*) /*override*/;

    // vIndex: 18
    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ILanEventHandler*) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $IsSignedIntoSignalingService() const;

    MCAPI bool $SendPacket(::NetherNet::NetworkID, uint64, char const*, uint, ::NetherNet::ESendType);

    MCAPI bool $IsPacketAvailable(::NetherNet::NetworkID, uint64, uint*);

    MCAPI void $ClearPacketData(::NetherNet::NetworkID, uint64);

    MCAPI bool $ReadPacket(::NetherNet::NetworkID, uint64, void*, uint, uint*);

    MCAPI bool $OpenSessionWithUser(::NetherNet::NetworkID);

    MCAPI bool $CloseSessionWithUser(::NetherNet::NetworkID, uint64);

    MCAPI bool $GetSessionState(::NetherNet::NetworkID, uint64, ::NetherNet::SessionState*);

    MCAPI void $SetWebRTCSignalingInterface(::std::shared_ptr<::NetherNet::IWebRTCSignalingInterface> const&);

    MCAPI void
    $SignIntoSignalingService(::std::function<void(::std::error_code)> const&, ::std::function<void(::NetherNet::SignalingHostConnectionStatus, uint)> const&, ::NetherNet::IWebRTCSignalingInterface::SignalingConfiguration const&);

    MCAPI void $SignOutFromSignalingService();

    MCAPI void $RegisterRelayServerCredentialsReadyCallback(::std::function<
                                                            void(::NetherNet::ERelayServerConfigurationResult)> const&);

    MCAPI bool $IsBroadcastDiscoveryEnabled();

    MCAPI void $EnableBroadcastDiscovery();

    MCAPI void $DisableBroadcastDiscovery();

    MCAPI void $EnableSignalingOverLAN();

    MCAPI void $DisableSignalingOverLAN();

    MCAPI ::Bedrock::PubSub::Subscription $RegisterEventHandler(::NetherNet::ISignalingEventHandler*);

    MCAPI ::Bedrock::PubSub::Subscription $RegisterEventHandler(::NetherNet::ILanEventHandler*);
    // NOLINTEND
};
