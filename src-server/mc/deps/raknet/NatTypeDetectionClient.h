#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PI2_LostConnectionReason.h"
#include "mc/deps/raknet/PluginInterface2.h"
#include "mc/deps/raknet/PluginReceiveResult.h"
#include "mc/deps/raknet/RNS2EventHandler.h"
#include "mc/deps/raknet/SimpleMutex.h"
#include "mc/deps/raknet/SystemAddress.h"
#include "mc/deps/raknet/data_structures/Queue.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class RakNetSocket2; }
namespace RakNet { struct Packet; }
namespace RakNet { struct RNS2RecvStruct; }
namespace RakNet { struct RakNetGUID; }
// clang-format on

namespace RakNet {

class NatTypeDetectionClient : public ::RakNet::PluginInterface2, public ::RakNet::RNS2EventHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::DataStructures::Queue<::RakNet::RNS2RecvStruct*>> bufferedPackets;
    ::ll::TypedStorage<8, 40, ::RakNet::SimpleMutex>                              bufferedPacketsMutex;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::RakNet::RakNetSocket2>>         c2;
    ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>                           serverAddress;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NatTypeDetectionClient() /*override*/ = default;

    // vIndex: 3
    virtual void Update() /*override*/;

    // vIndex: 4
    virtual ::RakNet::PluginReceiveResult OnReceive(::RakNet::Packet*) /*override*/;

    // vIndex: 7
    virtual void OnClosedConnection(
        ::RakNet::SystemAddress const&,
        ::RakNet::RakNetGUID,
        ::RakNet::PI2_LostConnectionReason
    ) /*override*/;

    // vIndex: 6
    virtual void OnRakPeerShutdown() /*override*/;

    // vIndex: 2
    virtual void OnDetach() /*override*/;

    // vIndex: 1
    virtual void OnRNS2Recv(::RakNet::RNS2RecvStruct*) /*override*/;

    // vIndex: 2
    virtual void DeallocRNS2RecvStruct(::RakNet::RNS2RecvStruct*, char const*, uint) /*override*/;

    // vIndex: 3
    virtual ::RakNet::RNS2RecvStruct* AllocRNS2RecvStruct(char const*, uint) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
