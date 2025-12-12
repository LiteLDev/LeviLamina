#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PacketLogger.h"

namespace RakNet {

class PacketOutputWindowLogger : public ::RakNet::PacketLogger {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PacketOutputWindowLogger() /*override*/ = default;

    virtual void WriteLog(char const*) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
