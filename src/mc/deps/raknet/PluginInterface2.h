#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PI2_FailedConnectionAttemptReason.h"
#include "mc/deps/raknet/PI2_LostConnectionReason.h"
#include "mc/deps/raknet/PluginReceiveResult.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class RakPeerInterface; }
namespace RakNet { struct InternalPacket; }
namespace RakNet { struct Packet; }
namespace RakNet { struct RakNetGUID; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class PluginInterface2 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd5879f;
    ::ll::UntypedStorage<8, 8> mUnk57d580;
    // NOLINTEND

public:
    // prevent constructor by default
    PluginInterface2& operator=(PluginInterface2 const&);
    PluginInterface2(PluginInterface2 const&);
    PluginInterface2();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PluginInterface2() = default;

    // vIndex: 1
    virtual void OnAttach();

    // vIndex: 2
    virtual void OnDetach();

    // vIndex: 3
    virtual void Update();

    // vIndex: 4
    virtual ::RakNet::PluginReceiveResult OnReceive(::RakNet::Packet*);

    // vIndex: 5
    virtual void OnRakPeerStartup();

    // vIndex: 6
    virtual void OnRakPeerShutdown();

    // vIndex: 7
    virtual void
    OnClosedConnection(::RakNet::SystemAddress const&, ::RakNet::RakNetGUID, ::RakNet::PI2_LostConnectionReason);

    // vIndex: 8
    virtual void OnNewConnection(::RakNet::SystemAddress const&, ::RakNet::RakNetGUID, bool);

    // vIndex: 9
    virtual void OnFailedConnectionAttempt(::RakNet::Packet*, ::RakNet::PI2_FailedConnectionAttemptReason);

    // vIndex: 10
    virtual bool UsesReliabilityLayer() const;

    // vIndex: 11
    virtual void OnDirectSocketSend(char const*, uint const, ::RakNet::SystemAddress);

    // vIndex: 12
    virtual void OnDirectSocketReceive(char const*, uint const, ::RakNet::SystemAddress);

    // vIndex: 13
    virtual void OnReliabilityLayerNotification(char const*, uint const, ::RakNet::SystemAddress, bool);

    // vIndex: 14
    virtual void OnInternalPacket(::RakNet::InternalPacket*, uint, ::RakNet::SystemAddress, uint, int);

    // vIndex: 15
    virtual void OnAck(uint, ::RakNet::SystemAddress, uint);

    // vIndex: 16
    virtual void OnPushBackPacket(char const*, uint const, ::RakNet::SystemAddress);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD void SetRakPeerInterface(::RakNet::RakPeerInterface* ptr);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
