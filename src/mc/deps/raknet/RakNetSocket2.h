#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/RNS2Type.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct NetworkAdapter; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class RakNetSocket2 {
public:
    // prevent constructor by default
    RakNetSocket2& operator=(RakNetSocket2 const&);
    RakNetSocket2(RakNetSocket2 const&);
    RakNetSocket2();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RakNetSocket2() = default;

    // vIndex: 1
    virtual void __unk_vfn_1() = 0;

    // vIndex: 2
    virtual void SetMulticastInterface(int interfaceIndex);

    MCAPI struct RakNet::SystemAddress GetBoundAddress() const;

    MCAPI ::RakNet::RNS2Type GetSocketType() const;

    MCAPI uint GetUserConnectionSocketIndex() const;

    MCAPI bool IsBerkleySocket() const;

    MCAPI void SetUserConnectionSocketIndex(uint i);

    MCAPI static void GetMyAdapters(struct RakNet::NetworkAdapter* const adapters);

    MCAPI static void GetMyIP(struct RakNet::SystemAddress* const addresses);

    // NOLINTEND
};

}; // namespace RakNet
