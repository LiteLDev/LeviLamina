#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/SimpleMutex.h"
#include "mc/deps/raknet/SystemAddress.h"
#include "mc/deps/raknet/data_structures/ByteQueue.h"

namespace RakNet {

struct RemoteClient {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>                       socket;
    ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>    systemAddress;
    ::ll::TypedStorage<8, 24, ::DataStructures::ByteQueue> outgoingData;
    ::ll::TypedStorage<1, 1, bool>                         isActive;
    ::ll::TypedStorage<8, 40, ::RakNet::SimpleMutex>       outgoingDataMutex;
    ::ll::TypedStorage<8, 40, ::RakNet::SimpleMutex>       isActiveMutex;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RemoteClient();

    MCAPI void SendOrBuffer(char const** data, uint const* lengths, int numParameters);

    MCAPI ~RemoteClient();
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
};

} // namespace RakNet
