#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PacketLogger.h"
#include "mc/deps/raknet/data_structures/SingleProducerConsumer.h"

namespace RakNet {

class ThreadsafePacketLogger : public ::RakNet::PacketLogger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::DataStructures::SingleProducerConsumer<char*>> logMessages;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ThreadsafePacketLogger() /*override*/ = default;

    // vIndex: 3
    virtual void Update() /*override*/;

    // vIndex: 26
    virtual void AddToLog(char const*) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
