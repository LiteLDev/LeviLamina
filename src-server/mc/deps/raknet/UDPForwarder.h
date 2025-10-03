#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/LocklessUint32_t.h"
#include "mc/deps/raknet/RakString.h"
#include "mc/deps/raknet/SimpleMutex.h"
#include "mc/deps/raknet/SystemAddress.h"
#include "mc/deps/raknet/UDPForwarderResult.h"
#include "mc/deps/raknet/data_structures/List.h"
#include "mc/deps/raknet/data_structures/Queue.h"
#include "mc/deps/raknet/data_structures/ThreadsafeAllocatingQueue.h"

namespace RakNet {

class UDPForwarder {
public:
    // UDPForwarder inner types declare
    // clang-format off
    struct ForwardEntry;
    struct StartForwardingInputStruct;
    struct StartForwardingOutputStruct;
    struct StopForwardingStruct;
    // clang-format on

    // UDPForwarder inner types define
    struct ForwardEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> addr1Unconfirmed;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> addr2Unconfirmed;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> addr1Confirmed;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> addr2Confirmed;
        ::ll::TypedStorage<4, 4, uint>                      timeLastDatagramForwarded;
        ::ll::TypedStorage<8, 8, uint64>                    socket;
        ::ll::TypedStorage<4, 4, uint>                      timeoutOnNoDataMS;
        ::ll::TypedStorage<2, 2, short>                     socketFamily;
        // NOLINTEND
    };

    struct StartForwardingInputStruct {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> source;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> destination;
        ::ll::TypedStorage<4, 4, uint>                      timeoutOnNoDataMS;
        ::ll::TypedStorage<8, 8, ::RakNet::RakString>       forceHostAddress;
        ::ll::TypedStorage<2, 2, ushort>                    socketFamily;
        ::ll::TypedStorage<4, 4, uint>                      inputId;
        // NOLINTEND
    };

    struct StartForwardingOutputStruct {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ushort>                       forwardingPort;
        ::ll::TypedStorage<8, 8, uint64>                       forwardingSocket;
        ::ll::TypedStorage<4, 4, ::RakNet::UDPForwarderResult> result;
        ::ll::TypedStorage<4, 4, uint>                         inputId;
        // NOLINTEND
    };

    struct StopForwardingStruct {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> source;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> destination;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        136,
        ::DataStructures::ThreadsafeAllocatingQueue<::RakNet::UDPForwarder::StartForwardingInputStruct>>
        startForwardingInput;
    ::ll::TypedStorage<8, 24, ::DataStructures::Queue<::RakNet::UDPForwarder::StartForwardingOutputStruct>>
                                                     startForwardingOutput;
    ::ll::TypedStorage<8, 40, ::RakNet::SimpleMutex> startForwardingOutputMutex;
    ::ll::
        TypedStorage<8, 136, ::DataStructures::ThreadsafeAllocatingQueue<::RakNet::UDPForwarder::StopForwardingStruct>>
                                                                                             stopForwardingCommands;
    ::ll::TypedStorage<4, 4, uint>                                                           nextInputId;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::UDPForwarder::ForwardEntry*>> forwardListNotUpdated;
    ::ll::TypedStorage<2, 2, ushort>                                                         maxForwardEntries;
    ::ll::TypedStorage<4, 4, ::RakNet::LocklessUint32_t>                                     isRunning;
    ::ll::TypedStorage<4, 4, ::RakNet::LocklessUint32_t>                                     threadRunning;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UDPForwarder() = default;
    // NOLINTEND
};

} // namespace RakNet
