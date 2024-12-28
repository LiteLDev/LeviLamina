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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TcpProxy();

    // vIndex: 1
    virtual bool start(ushort, ushort, ushort) = 0;

    // vIndex: 2
    virtual ::RakNet::SystemAddress connect(::std::string const&, ushort) = 0;

    // vIndex: 3
    virtual void send(char const*, uint, ::RakNet::SystemAddress) = 0;

    // vIndex: 4
    virtual void close(::RakNet::SystemAddress) = 0;

    // vIndex: 5
    virtual bool packetsAvailable() = 0;

    // vIndex: 6
    virtual ::RakNet::Packet* nextPacket() = 0;

    // vIndex: 7
    virtual void deallocatePacket(::RakNet::Packet*) = 0;

    // vIndex: 8
    virtual ::RakNet::SystemAddress nextCompletedConnectionAttempt() = 0;

    // vIndex: 9
    virtual ::RakNet::SystemAddress nextFailedConnectionAttempt() = 0;

    // vIndex: 10
    virtual ::RakNet::SystemAddress nextLostConnection() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
