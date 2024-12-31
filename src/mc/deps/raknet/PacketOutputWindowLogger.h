#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PacketLogger.h"

namespace RakNet {

class PacketOutputWindowLogger : public ::RakNet::PacketLogger {
public:
    // prevent constructor by default
    PacketOutputWindowLogger& operator=(PacketOutputWindowLogger const&);
    PacketOutputWindowLogger(PacketOutputWindowLogger const&);
    PacketOutputWindowLogger();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PacketOutputWindowLogger() /*override*/ = default;

    // vIndex: 20
    virtual void WriteLog(char const*) /*override*/;
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
