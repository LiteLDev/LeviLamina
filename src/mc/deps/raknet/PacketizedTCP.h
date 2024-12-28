#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/TCPInterface.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct Packet; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class PacketizedTCP : public ::RakNet::TCPInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnke16eaa;
    ::ll::UntypedStorage<8, 168> mUnk39e085;
    ::ll::UntypedStorage<8, 24>  mUnk4117bd;
    ::ll::UntypedStorage<8, 24>  mUnk1b82f1;
    ::ll::UntypedStorage<8, 24>  mUnka9ed7b;
    ::ll::UntypedStorage<8, 24>  mUnkccf08c;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketizedTCP& operator=(PacketizedTCP const&);
    PacketizedTCP(PacketizedTCP const&);
    PacketizedTCP();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PacketizedTCP() /*override*/;

    // vIndex: 1
    virtual void
    Send(char const* data, uint length, ::RakNet::SystemAddress const& systemAddress, bool broadcast) /*override*/;

    // vIndex: 2
    virtual bool SendList(
        char const**                   data,
        uint const*                    lengths,
        int const                      numParameters,
        ::RakNet::SystemAddress const& systemAddress,
        bool                           broadcast
    ) /*override*/;

    // vIndex: 4
    virtual ::RakNet::Packet* Receive() /*override*/;
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

    MCAPI ::RakNet::Packet* $Receive();
    // NOLINTEND
};

} // namespace RakNet
