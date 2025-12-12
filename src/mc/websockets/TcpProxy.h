#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct Packet; }
namespace RakNet { struct SystemAddress; }
// clang-format on

class TcpProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TcpProxy();

    virtual bool start(ushort, ushort, ushort) = 0;

    virtual ::RakNet::SystemAddress connect(::std::string const&, ushort) = 0;

    virtual void send(char const*, uint, ::RakNet::SystemAddress) = 0;

    virtual void close(::RakNet::SystemAddress) = 0;

    virtual bool packetsAvailable() = 0;

    virtual ::RakNet::Packet* nextPacket() = 0;

    virtual void deallocatePacket(::RakNet::Packet*) = 0;

    virtual ::RakNet::SystemAddress nextCompletedConnectionAttempt() = 0;

    virtual ::RakNet::SystemAddress nextFailedConnectionAttempt() = 0;

    virtual ::RakNet::SystemAddress nextLostConnection() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
