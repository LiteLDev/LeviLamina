#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/LocklessUint32_t.h"
#include "mc/deps/raknet/SimpleMutex.h"
#include "mc/deps/raknet/SystemAddress.h"
#include "mc/deps/raknet/data_structures/List.h"
#include "mc/deps/raknet/data_structures/Queue.h"
#include "mc/deps/raknet/data_structures/ThreadsafeAllocatingQueue.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class PluginInterface2; }
namespace RakNet { struct Packet; }
namespace RakNet { struct RemoteClient; }
// clang-format on

namespace RakNet {

class TCPInterface {
public:
    // TCPInterface inner types declare
    // clang-format off
    struct ThisPtrPlusSysAddr;
    // clang-format on

    // TCPInterface inner types define
    struct ThisPtrPlusSysAddr {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::RakNet::TCPInterface*>   tcpInterface;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> systemAddress;
        ::ll::TypedStorage<1, 1, bool>                      useSSL;
        ::ll::TypedStorage<1, 64, char[64]>                 bindAddress;
        ::ll::TypedStorage<2, 2, ushort>                    socketFamily;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::PluginInterface2*>> messageHandlerList;
    ::ll::TypedStorage<4, 4, ::RakNet::LocklessUint32_t>                           isStarted;
    ::ll::TypedStorage<4, 4, ::RakNet::LocklessUint32_t>                           threadRunning;
    ::ll::TypedStorage<8, 8, uint64>                                               listenSocket;
    ::ll::TypedStorage<2, 2, ushort>                                               listenPort;
    ::ll::TypedStorage<2, 2, ushort>                                               listenMaxIncomingConnections;
    ::ll::TypedStorage<2, 2, ushort>                                               listenSocketFamily;
    ::ll::TypedStorage<8, 8, char*>                                                listenHostAddress;
    ::ll::TypedStorage<8, 24, ::DataStructures::Queue<::RakNet::Packet*>>          headPush;
    ::ll::TypedStorage<8, 24, ::DataStructures::Queue<::RakNet::Packet*>>          tailPush;
    ::ll::TypedStorage<8, 8, ::RakNet::RemoteClient*>                              remoteClients;
    ::ll::TypedStorage<4, 4, int>                                                  remoteClientsLength;
    ::ll::TypedStorage<8, 136, ::DataStructures::ThreadsafeAllocatingQueue<::RakNet::Packet>> incomingMessages;
    ::ll::TypedStorage<8, 136, ::DataStructures::ThreadsafeAllocatingQueue<::RakNet::SystemAddress>>
        newIncomingConnections;
    ::ll::TypedStorage<8, 136, ::DataStructures::ThreadsafeAllocatingQueue<::RakNet::SystemAddress>> lostConnections;
    ::ll::TypedStorage<8, 136, ::DataStructures::ThreadsafeAllocatingQueue<::RakNet::SystemAddress>>
        requestedCloseConnections;
    ::ll::TypedStorage<8, 136, ::DataStructures::ThreadsafeAllocatingQueue<::RakNet::RemoteClient*>> newRemoteClients;
    ::ll::TypedStorage<8, 40, ::RakNet::SimpleMutex>                            completedConnectionAttemptMutex;
    ::ll::TypedStorage<8, 40, ::RakNet::SimpleMutex>                            failedConnectionAttemptMutex;
    ::ll::TypedStorage<8, 24, ::DataStructures::Queue<::RakNet::SystemAddress>> completedConnectionAttempts;
    ::ll::TypedStorage<8, 24, ::DataStructures::Queue<::RakNet::SystemAddress>> failedConnectionAttempts;
    ::ll::TypedStorage<4, 4, int>                                               threadPriority;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<uint64>>                   blockingSocketList;
    ::ll::TypedStorage<8, 40, ::RakNet::SimpleMutex>                            blockingSocketListMutex;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TCPInterface();

    // vIndex: 1
    virtual void Send(char const* data, uint length, ::RakNet::SystemAddress const& systemAddress, bool broadcast);

    // vIndex: 2
    virtual bool SendList(
        char const**                   data,
        uint const*                    lengths,
        int const                      numParameters,
        ::RakNet::SystemAddress const& systemAddress,
        bool                           broadcast
    );

    // vIndex: 3
    virtual bool ReceiveHasPackets();

    // vIndex: 4
    virtual ::RakNet::Packet* Receive();

    // vIndex: 5
    virtual void PushBackPacket(::RakNet::Packet* packet, bool pushAtHead);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void CloseConnection(::RakNet::SystemAddress systemAddress);

    MCAPI ::RakNet::SystemAddress
    Connect(char const* host, ushort remotePort, bool block, ushort socketFamily, char const* bindAddress);

    MCAPI bool
    CreateListenSocket(ushort port, ushort maxIncomingConnections, ushort socketFamily, char const* bindAddress);

    MCAPI void GetConnectionList(::RakNet::SystemAddress* remoteSystems, ushort* numberOfSystems) const;

    MCAPI uint GetOutgoingDataBufferSize(::RakNet::SystemAddress systemAddress) const;

    MCAPI ::RakNet::SystemAddress HasCompletedConnectionAttempt();

    MCAPI ::RakNet::SystemAddress HasFailedConnectionAttempt();

    MCAPI ::RakNet::SystemAddress HasLostConnection();

    MCAPI ::RakNet::Packet* ReceiveInt();

    MCAPI uint64 SocketConnect(char const* host, ushort remotePort, ushort socketFamily, char const* bindAddress);

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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $Send(char const* data, uint length, ::RakNet::SystemAddress const& systemAddress, bool broadcast);

    MCAPI bool $SendList(
        char const**                   data,
        uint const*                    lengths,
        int const                      numParameters,
        ::RakNet::SystemAddress const& systemAddress,
        bool                           broadcast
    );

    MCAPI bool $ReceiveHasPackets();

    MCAPI ::RakNet::Packet* $Receive();

    MCAPI void $PushBackPacket(::RakNet::Packet* packet, bool pushAtHead);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace RakNet
