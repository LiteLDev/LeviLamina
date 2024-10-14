#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct Packet; }
namespace RakNet { struct SystemAddress; }
// clang-format on

class TcpProxy {
public:
    // prevent constructor by default
    TcpProxy& operator=(TcpProxy const&);
    TcpProxy(TcpProxy const&);
    TcpProxy();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TcpProxy();

    // vIndex: 1
    virtual bool start(ushort port, ushort maxIncomming, ushort maxOutgoing) = 0;

    // vIndex: 2
    virtual struct RakNet::SystemAddress connect(std::string const& host, ushort port) = 0;

    // vIndex: 3
    virtual void send(char const* data, uint length, struct RakNet::SystemAddress address) = 0;

    // vIndex: 4
    virtual void close(struct RakNet::SystemAddress address) = 0;

    // vIndex: 5
    virtual bool packetsAvailable() = 0;

    // vIndex: 6
    virtual struct RakNet::Packet* nextPacket() = 0;

    // vIndex: 7
    virtual void deallocatePacket(struct RakNet::Packet* packet) = 0;

    // vIndex: 8
    virtual struct RakNet::SystemAddress nextCompletedConnectionAttempt() = 0;

    // vIndex: 9
    virtual struct RakNet::SystemAddress nextFailedConnectionAttempt() = 0;

    // vIndex: 10
    virtual struct RakNet::SystemAddress nextLostConnection() = 0;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    // NOLINTEND
};
