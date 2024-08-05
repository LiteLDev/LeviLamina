#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct Packet; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class TCPInterface {
public:
    // prevent constructor by default
    TCPInterface& operator=(TCPInterface const&);
    TCPInterface(TCPInterface const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TCPInterface();

    // vIndex: 1
    virtual void Send(char const* data, uint length, struct RakNet::SystemAddress const& systemAddress, bool broadcast);

    // vIndex: 2
    virtual bool SendList(
        char const**                        data,
        uint const*                         lengths,
        int                                 numParameters,
        struct RakNet::SystemAddress const& systemAddress,
        bool                                broadcast
    );

    // vIndex: 3
    virtual bool ReceiveHasPackets();

    // vIndex: 4
    virtual struct RakNet::Packet* Receive();

    // vIndex: 5
    virtual void PushBackPacket(struct RakNet::Packet* packet, bool pushAtHead);

    MCAPI void CloseConnection(struct RakNet::SystemAddress systemAddress);

    MCAPI struct RakNet::SystemAddress
    Connect(char const* host, ushort remotePort, bool block, ushort socketFamily, char const* bindAddress);

    MCAPI void DeallocatePacket(struct RakNet::Packet* packet);

    MCAPI ushort GetConnectionCount() const;

    MCAPI void GetConnectionList(struct RakNet::SystemAddress* remoteSystems, ushort* numberOfSystems) const;

    MCAPI uint GetOutgoingDataBufferSize(struct RakNet::SystemAddress systemAddress) const;

    MCAPI struct RakNet::SystemAddress HasCompletedConnectionAttempt();

    MCAPI struct RakNet::SystemAddress HasFailedConnectionAttempt();

    MCAPI struct RakNet::SystemAddress HasLostConnection();

    MCAPI bool Start(
        ushort      port,
        ushort      maxIncomingConnections,
        ushort      maxConnections,
        int         _threadPriority,
        ushort      socketFamily,
        char const* bindAddress
    );

    MCAPI void Stop();

    MCAPI TCPInterface();

    MCAPI bool WasStarted() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool
    CreateListenSocket(ushort port, ushort maxIncomingConnections, ushort socketFamily, char const* bindAddress);

    MCAPI uint64 SocketConnect(char const* host, ushort remotePort, ushort socketFamily, char const* bindAddress);

    MCAPI bool _removeFromBlockingSocketList(uint64 const&);

    // NOLINTEND
};

}; // namespace RakNet
