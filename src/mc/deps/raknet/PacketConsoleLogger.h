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
    virtual void SetLogCommandParser(::RakNet::LogCommandParser*);

    virtual void WriteLog(char const*) /*override*/;

    virtual ~PacketConsoleLogger() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
