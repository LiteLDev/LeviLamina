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
    // vIndex: 0, symbol: __gen_??1RNS2_Windows@RakNet@@UEAA@XZ
    virtual ~RNS2_Windows() = default;

    // vIndex: 1, symbol: ?Send@RNS2_Windows@RakNet@@UEAAHPEAURNS2_SendParameters@2@PEBDI@Z
    virtual int Send(struct RakNet::RNS2_SendParameters*, char const*, uint);

    // vIndex: 2, symbol: ?SetMulticastInterface@RNS2_Berkley@RakNet@@UEAAXH@Z
    virtual void SetMulticastInterface(int interfaceIndex);

    // vIndex: 3, symbol: ?Bind@RNS2_Windows@RakNet@@UEAA?AW4RNS2BindResult@2@PEAURNS2_BerkleyBindParameters@2@PEBDI@Z
    virtual ::RakNet::RNS2BindResult Bind(struct RakNet::RNS2_BerkleyBindParameters*, char const*, uint);

    // symbol: ?GetSocketLayerOverride@RNS2_Windows@RakNet@@QEAAPEAVSocketLayerOverride@2@XZ
    MCAPI class RakNet::SocketLayerOverride* GetSocketLayerOverride();

    // NOLINTEND
};

}; // namespace RakNet
