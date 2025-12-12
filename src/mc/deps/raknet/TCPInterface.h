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
    // TCPInterface inner types declare
    // clang-format off
    struct ThisPtrPlusSysAddr;
    // clang-format on

    // TCPInterface inner types define
    struct ThisPtrPlusSysAddr {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>   mUnk70c3af;
        ::ll::UntypedStorage<8, 136> mUnke90360;
        ::ll::UntypedStorage<1, 1>   mUnk676e05;
        ::ll::UntypedStorage<1, 64>  mUnkbe89ff;
        ::ll::UntypedStorage<2, 2>   mUnkdf850c;
        // NOLINTEND

    public:
        // prevent constructor by default
        ThisPtrPlusSysAddr& operator=(ThisPtrPlusSysAddr const&);
        ThisPtrPlusSysAddr(ThisPtrPlusSysAddr const&);
        ThisPtrPlusSysAddr();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnk3cc6c5;
    ::ll::UntypedStorage<4, 4>   mUnkf0fe21;
    ::ll::UntypedStorage<4, 4>   mUnka96710;
    ::ll::UntypedStorage<8, 8>   mUnka54868;
    ::ll::UntypedStorage<2, 2>   mUnk60f7c0;
    ::ll::UntypedStorage<2, 2>   mUnk4e52e4;
    ::ll::UntypedStorage<2, 2>   mUnk91c0bd;
    ::ll::UntypedStorage<8, 8>   mUnkec5a3a;
    ::ll::UntypedStorage<8, 24>  mUnk757712;
    ::ll::UntypedStorage<8, 24>  mUnk1826ac;
    ::ll::UntypedStorage<8, 8>   mUnk637811;
    ::ll::UntypedStorage<4, 4>   mUnk762ebf;
    ::ll::UntypedStorage<8, 136> mUnk75578b;
    ::ll::UntypedStorage<8, 136> mUnk992a86;
    ::ll::UntypedStorage<8, 136> mUnk27b7a0;
    ::ll::UntypedStorage<8, 136> mUnkb07421;
    ::ll::UntypedStorage<8, 136> mUnka4fe43;
    ::ll::UntypedStorage<8, 40>  mUnk6b6120;
    ::ll::UntypedStorage<8, 40>  mUnk583ef4;
    ::ll::UntypedStorage<8, 24>  mUnk128387;
    ::ll::UntypedStorage<8, 24>  mUnk8e4b25;
    ::ll::UntypedStorage<4, 4>   mUnka114bf;
    ::ll::UntypedStorage<8, 16>  mUnked9328;
    ::ll::UntypedStorage<8, 40>  mUnk279f01;
    // NOLINTEND

public:
    // prevent constructor by default
    TCPInterface& operator=(TCPInterface const&);
    TCPInterface(TCPInterface const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TCPInterface();

    virtual void Send(char const* data, uint length, ::RakNet::SystemAddress const& systemAddress, bool broadcast);

    virtual bool SendList(
        char const**                   data,
        uint const*                    lengths,
        int const                      numParameters,
        ::RakNet::SystemAddress const& systemAddress,
        bool                           broadcast
    );

    virtual bool ReceiveHasPackets();

    virtual ::RakNet::Packet* Receive();

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
