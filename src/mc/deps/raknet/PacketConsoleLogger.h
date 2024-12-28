#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PacketLogger.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class LogCommandParser; }
// clang-format on

namespace RakNet {

class PacketConsoleLogger : public ::RakNet::PacketLogger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk422fd7;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketConsoleLogger& operator=(PacketConsoleLogger const&);
    PacketConsoleLogger(PacketConsoleLogger const&);
    PacketConsoleLogger();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 28
    virtual void SetLogCommandParser(::RakNet::LogCommandParser*);

    // vIndex: 20
    virtual void WriteLog(char const*) /*override*/;

    // vIndex: 0
    virtual ~PacketConsoleLogger() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $SetLogCommandParser(::RakNet::LogCommandParser*);

    MCAPI void $WriteLog(char const*);
    // NOLINTEND
};

} // namespace RakNet
