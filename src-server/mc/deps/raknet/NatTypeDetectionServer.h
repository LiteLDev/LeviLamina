#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PI2_LostConnectionReason.h"
#include "mc/deps/raknet/PluginInterface2.h"
#include "mc/deps/raknet/PluginReceiveResult.h"
#include "mc/deps/raknet/RNS2EventHandler.h"
#include "mc/deps/raknet/RakNetGUID.h"
#include "mc/deps/raknet/SimpleMutex.h"
#include "mc/deps/raknet/SystemAddress.h"
#include "mc/deps/raknet/data_structures/List.h"
#include "mc/deps/raknet/data_structures/Queue.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class RakNetSocket2; }
namespace RakNet { struct Packet; }
namespace RakNet { struct RNS2RecvStruct; }
// clang-format on

namespace RakNet {

class NatTypeDetectionServer : public ::RakNet::PluginInterface2, public ::RakNet::RNS2EventHandler {
public:
    // NatTypeDetectionServer inner types declare
    // clang-format off
    struct NATDetectionAttempt;
    // clang-format on

    // NatTypeDetectionServer inner types define
    enum class NATDetectionState : int {
        None                      = 0,
        TestingNone1              = 1,
        TestingNone2              = 2,
        TestingFullCone1          = 3,
        TestingFullCone2          = 4,
        TestingAddressRestricted1 = 5,
        TestingAddressRestricted2 = 6,
        TestingPortRestricted1    = 7,
        TestingPortRestricted2    = 8,
        Done                      = 9,
    };

    struct NATDetectionAttempt {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>                           systemAddress;
        ::ll::TypedStorage<4, 4, ::RakNet::NatTypeDetectionServer::NATDetectionState> detectionState;
        ::ll::TypedStorage<4, 4, uint>                                                nextStateTime;
        ::ll::TypedStorage<4, 4, uint>                                                timeBetweenAttempts;
        ::ll::TypedStorage<2, 2, ushort>                                              c2Port;
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>                               guid;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::DataStructures::Queue<::RakNet::RNS2RecvStruct*>> bufferedPackets;
    ::ll::TypedStorage<8, 40, ::RakNet::SimpleMutex>                              bufferedPacketsMutex;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::NatTypeDetectionServer::NATDetectionAttempt>>
                                                                          natDetectionAttempts;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::RakNet::RakNetSocket2>> s1p2;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::RakNet::RakNetSocket2>> s2p3;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::RakNet::RakNetSocket2>> s3p4;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::RakNet::RakNetSocket2>> s4p5;
    ::ll::TypedStorage<1, 64, char[64]>                                   s3p4Address;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NatTypeDetectionServer() /*override*/ = default;

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
