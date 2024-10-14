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
    // prevent constructor by default
    RakTcpProxy& operator=(RakTcpProxy const&);
    RakTcpProxy(RakTcpProxy const&);
    RakTcpProxy();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RakTcpProxy() = default;

    // vIndex: 1
    virtual bool start(ushort port, ushort maxIncomming, ushort maxOutgoing);

    // vIndex: 2
    virtual struct RakNet::SystemAddress connect(std::string const& host, ushort port);

    // vIndex: 3
    virtual void send(char const* data, uint length, struct RakNet::SystemAddress address);

    // vIndex: 4
    virtual void close(struct RakNet::SystemAddress address);

    // vIndex: 5
    virtual bool packetsAvailable();

    // vIndex: 6
    virtual struct RakNet::Packet* nextPacket();

    // vIndex: 7
    virtual void deallocatePacket(struct RakNet::Packet* packet);

    // vIndex: 8
    virtual struct RakNet::SystemAddress nextCompletedConnectionAttempt();

    // vIndex: 9
    virtual struct RakNet::SystemAddress nextFailedConnectionAttempt();

    // vIndex: 10
    virtual struct RakNet::SystemAddress nextLostConnection();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void close$(struct RakNet::SystemAddress address);

    MCAPI struct RakNet::SystemAddress connect$(std::string const& host, ushort port);

    MCAPI void deallocatePacket$(struct RakNet::Packet* packet);

    MCAPI struct RakNet::SystemAddress nextCompletedConnectionAttempt$();

    MCAPI struct RakNet::SystemAddress nextFailedConnectionAttempt$();

    MCAPI struct RakNet::SystemAddress nextLostConnection$();

    MCAPI struct RakNet::Packet* nextPacket$();

    MCAPI bool packetsAvailable$();

    MCAPI void send$(char const* data, uint length, struct RakNet::SystemAddress address);

    MCAPI bool start$(ushort port, ushort maxIncomming, ushort maxOutgoing);

    // NOLINTEND
};
