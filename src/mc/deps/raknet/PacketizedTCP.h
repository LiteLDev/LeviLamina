#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/TCPInterface.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class TCPInterface; }
namespace RakNet { struct Packet; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class PacketizedTCP : public ::RakNet::TCPInterface {
public:
    // prevent constructor by default
    PacketizedTCP& operator=(PacketizedTCP const&);
    PacketizedTCP(PacketizedTCP const&);
    PacketizedTCP();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PacketizedTCP@RakNet@@UEAA@XZ
    virtual ~PacketizedTCP() = default;

    // NOLINTEND
};

}; // namespace RakNet
