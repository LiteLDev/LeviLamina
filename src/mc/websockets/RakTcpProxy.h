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
    ::ll::UntypedStorage<8, 8> mUnkbdae36;
    // NOLINTEND

public:
    // prevent constructor by default
    RakTcpProxy& operator=(RakTcpProxy const&);
    RakTcpProxy(RakTcpProxy const&);
    RakTcpProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RakTcpProxy() /*override*/ = default;

    // vIndex: 1
    virtual bool start(ushort port, ushort maxIncomming, ushort maxOutgoing) /*override*/;

    // vIndex: 2
    virtual ::RakNet::SystemAddress connect(::std::string const& host, ushort port) /*override*/;

    // vIndex: 3
    virtual void send(char const* data, uint length, ::RakNet::SystemAddress address) /*override*/;

    // vIndex: 4
    virtual void close(::RakNet::SystemAddress address) /*override*/;

    // vIndex: 5
    virtual bool packetsAvailable() /*override*/;

    // vIndex: 6
    virtual ::RakNet::Packet* nextPacket() /*override*/;

    // vIndex: 7
    virtual void deallocatePacket(::RakNet::Packet* packet) /*override*/;

    // vIndex: 8
    virtual ::RakNet::SystemAddress nextCompletedConnectionAttempt() /*override*/;

    // vIndex: 9
    virtual ::RakNet::SystemAddress nextFailedConnectionAttempt() /*override*/;

    // vIndex: 10
    virtual ::RakNet::SystemAddress nextLostConnection() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $start(ushort port, ushort maxIncomming, ushort maxOutgoing);

    MCAPI ::RakNet::SystemAddress $connect(::std::string const& host, ushort port);

    MCAPI void $send(char const* data, uint length, ::RakNet::SystemAddress address);

    MCAPI void $close(::RakNet::SystemAddress address);

    MCAPI bool $packetsAvailable();

    MCAPI ::RakNet::Packet* $nextPacket();

    MCAPI void $deallocatePacket(::RakNet::Packet* packet);

    MCAPI ::RakNet::SystemAddress $nextCompletedConnectionAttempt();

    MCAPI ::RakNet::SystemAddress $nextFailedConnectionAttempt();

    MCAPI ::RakNet::SystemAddress $nextLostConnection();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
