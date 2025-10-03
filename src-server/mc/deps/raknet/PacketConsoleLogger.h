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
    ::ll::TypedStorage<8, 8, ::RakNet::LogCommandParser*> logCommandParser;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 28
    virtual void SetLogCommandParser(::RakNet::LogCommandParser*);

    // vIndex: 20
    virtual void WriteLog(char const*) /*override*/;

    // vIndex: 0
    virtual ~PacketConsoleLogger() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
