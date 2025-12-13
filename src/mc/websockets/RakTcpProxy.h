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
    virtual ~RakTcpProxy() /*override*/ = default;

    virtual bool start(ushort port, ushort maxIncomming, ushort maxOutgoing) /*override*/;

    virtual ::RakNet::SystemAddress connect(::std::string const& host, ushort port) /*override*/;

    virtual void send(char const* data, uint length, ::RakNet::SystemAddress address) /*override*/;

    virtual void close(::RakNet::SystemAddress address) /*override*/;

    virtual bool packetsAvailable() /*override*/;

    virtual ::RakNet::Packet* nextPacket() /*override*/;

    virtual void deallocatePacket(::RakNet::Packet* packet) /*override*/;

    virtual ::RakNet::SystemAddress nextCompletedConnectionAttempt() /*override*/;

    virtual ::RakNet::SystemAddress nextFailedConnectionAttempt() /*override*/;

    virtual ::RakNet::SystemAddress nextLostConnection() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $start(ushort port, ushort maxIncomming, ushort maxOutgoing);

    MCNAPI ::RakNet::SystemAddress $connect(::std::string const& host, ushort port);

    MCNAPI void $send(char const* data, uint length, ::RakNet::SystemAddress address);

    MCNAPI void $close(::RakNet::SystemAddress address);

    MCNAPI bool $packetsAvailable();

    MCNAPI ::RakNet::Packet* $nextPacket();

    MCNAPI void $deallocatePacket(::RakNet::Packet* packet);

    MCNAPI ::RakNet::SystemAddress $nextCompletedConnectionAttempt();

    MCNAPI ::RakNet::SystemAddress $nextFailedConnectionAttempt();

    MCNAPI ::RakNet::SystemAddress $nextLostConnection();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
