#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/RNS2BindResult.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class SocketLayerOverride; }
namespace RakNet { struct RNS2_BerkleyBindParameters; }
namespace RakNet { struct RNS2_SendParameters; }
// clang-format on

namespace RakNet {

class RNS2_Windows {
public:
    // prevent constructor by default
    RNS2_Windows& operator=(RNS2_Windows const&);
    RNS2_Windows(RNS2_Windows const&);
    RNS2_Windows();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RNS2_Windows() = default;

    // vIndex: 1
    virtual int Send(struct RakNet::RNS2_SendParameters*, char const*, uint);

    // vIndex: 2
    virtual void SetMulticastInterface(int interfaceIndex);

    // vIndex: 3
    virtual ::RakNet::RNS2BindResult Bind(struct RakNet::RNS2_BerkleyBindParameters*, char const*, uint);

    MCAPI class RakNet::SocketLayerOverride* GetSocketLayerOverride();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI ::RakNet::RNS2BindResult Bind$(struct RakNet::RNS2_BerkleyBindParameters*, char const*, uint);

    MCAPI int Send$(struct RakNet::RNS2_SendParameters*, char const*, uint);

    MCAPI void SetMulticastInterface$(int interfaceIndex);

    // NOLINTEND
};

}; // namespace RakNet
