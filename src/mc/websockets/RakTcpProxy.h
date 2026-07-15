#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/websockets/TcpProxy.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct Packet; }
namespace RakNet { struct SystemAddress; }
// clang-format on

class RakTcpProxy : public ::TcpProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk30bf73;
    // NOLINTEND

public:
    // prevent constructor by default
    RakTcpProxy& operator=(RakTcpProxy const&);
    RakTcpProxy(RakTcpProxy const&);
    RakTcpProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RakTcpProxy() /*override*/ = default;

    virtual bool start(ushort, ushort, ushort) /*override*/;

    virtual ::RakNet::SystemAddress connect(::std::string const&, ushort) /*override*/;

    virtual void send(char const*, uint, ::RakNet::SystemAddress) /*override*/;

    virtual void close(::RakNet::SystemAddress) /*override*/;

    virtual bool packetsAvailable() /*override*/;

    virtual ::RakNet::Packet* nextPacket() /*override*/;

    virtual void deallocatePacket(::RakNet::Packet*) /*override*/;

    virtual ::RakNet::SystemAddress nextCompletedConnectionAttempt() /*override*/;

    virtual ::RakNet::SystemAddress nextFailedConnectionAttempt() /*override*/;

    virtual ::RakNet::SystemAddress nextLostConnection() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
