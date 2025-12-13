#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PacketLogger.h"

namespace RakNet {

class PacketFileLogger : public ::RakNet::PacketLogger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb542f8;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketFileLogger& operator=(PacketFileLogger const&);
    PacketFileLogger(PacketFileLogger const&);
    PacketFileLogger();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PacketFileLogger() /*override*/ = default;

    virtual void WriteLog(char const*) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
