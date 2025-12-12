#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PI2_FailedConnectionAttemptReason.h"
#include "mc/deps/raknet/PI2_LostConnectionReason.h"
#include "mc/deps/raknet/PluginReceiveResult.h"

// auto generated forward declare list
// clang-format off
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
    virtual ~PluginInterface2() = default;

    virtual void OnAttach();

    virtual void OnDetach();

    virtual void Update();

    virtual ::RakNet::PluginReceiveResult OnReceive(::RakNet::Packet*);

    virtual void OnRakPeerStartup();

    virtual void OnRakPeerShutdown();

    virtual void
    OnClosedConnection(::RakNet::SystemAddress const&, ::RakNet::RakNetGUID, ::RakNet::PI2_LostConnectionReason);

    virtual void OnNewConnection(::RakNet::SystemAddress const&, ::RakNet::RakNetGUID, bool);

    virtual void OnFailedConnectionAttempt(::RakNet::Packet*, ::RakNet::PI2_FailedConnectionAttemptReason);

    virtual bool UsesReliabilityLayer() const;

    virtual void OnDirectSocketSend(char const*, uint const, ::RakNet::SystemAddress);

    virtual void OnDirectSocketReceive(char const*, uint const, ::RakNet::SystemAddress);

    virtual void OnReliabilityLayerNotification(char const*, uint const, ::RakNet::SystemAddress, bool);

    virtual void OnInternalPacket(::RakNet::InternalPacket*, uint, ::RakNet::SystemAddress, uint, int);

    virtual void OnAck(uint, ::RakNet::SystemAddress, uint);

    virtual void OnPushBackPacket(char const*, uint const, ::RakNet::SystemAddress);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
