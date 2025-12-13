#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PacketLogger.h"

namespace RakNet {

class ThreadsafePacketLogger : public ::RakNet::PacketLogger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk7d3d8b;
    // NOLINTEND

public:
    // prevent constructor by default
    ThreadsafePacketLogger& operator=(ThreadsafePacketLogger const&);
    ThreadsafePacketLogger(ThreadsafePacketLogger const&);
    ThreadsafePacketLogger();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ThreadsafePacketLogger() /*override*/ = default;

    virtual void Update() /*override*/;

    virtual void AddToLog(char const*) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
