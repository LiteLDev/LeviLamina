#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/TCPInterface.h"
#include "mc/deps/raknet/data_structures/Queue.h"

// auto generated forward declare list
// clang-format off
namespace DataStructures { class ByteQueue; }
namespace DataStructures { class Map; }
namespace RakNet { struct Packet; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class PacketizedTCP : public ::RakNet::TCPInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::DataStructures::Queue<::RakNet::Packet*>> waitingPackets;
    ::ll::TypedStorage<
        8,
        168,
        ::DataStructures::Map<::RakNet::SystemAddress, ::DataStructures::ByteQueue*, $unknown_type>>
                                                                                connections;
    ::ll::TypedStorage<8, 24, ::DataStructures::Queue<::RakNet::SystemAddress>> _newIncomingConnections;
    ::ll::TypedStorage<8, 24, ::DataStructures::Queue<::RakNet::SystemAddress>> _lostConnections;
    ::ll::TypedStorage<8, 24, ::DataStructures::Queue<::RakNet::SystemAddress>> _failedConnectionAttempts;
    ::ll::TypedStorage<8, 24, ::DataStructures::Queue<::RakNet::SystemAddress>> _completedConnectionAttempts;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PacketizedTCP() /*override*/ = default;

    // vIndex: 1
    virtual void
    Send(char const* data, uint length, ::RakNet::SystemAddress const& systemAddress, bool broadcast) /*override*/;

    // vIndex: 2
    virtual bool SendList(
        char const**                   data,
        uint const*                    lengths,
        int const                      numParameters,
        ::RakNet::SystemAddress const& systemAddress,
        bool                           broadcast
    ) /*override*/;

    // vIndex: 4
    virtual ::RakNet::Packet* Receive() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
