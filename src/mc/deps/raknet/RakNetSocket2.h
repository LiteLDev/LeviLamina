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
    // vIndex: 0, symbol: __gen_??1RakNetSocket2@RakNet@@UEAA@XZ
    virtual ~RakNetSocket2() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1() = 0;

    // vIndex: 2, symbol: ?SetMulticastInterface@RakNetSocket2@RakNet@@UEAAXH@Z
    virtual void SetMulticastInterface(int interfaceIndex);

    // symbol: ?GetBoundAddress@RakNetSocket2@RakNet@@QEBA?AUSystemAddress@2@XZ
    MCAPI struct RakNet::SystemAddress GetBoundAddress() const;

    // symbol: ?GetSocketType@RakNetSocket2@RakNet@@QEBA?AW4RNS2Type@2@XZ
    MCAPI ::RakNet::RNS2Type GetSocketType() const;

    // symbol: ?GetUserConnectionSocketIndex@RakNetSocket2@RakNet@@QEBAIXZ
    MCAPI uint GetUserConnectionSocketIndex() const;

    // symbol: ?IsBerkleySocket@RakNetSocket2@RakNet@@QEBA_NXZ
    MCAPI bool IsBerkleySocket() const;

    // symbol: ?SetUserConnectionSocketIndex@RakNetSocket2@RakNet@@QEAAXI@Z
    MCAPI void SetUserConnectionSocketIndex(uint i);

    // symbol: ?GetMyAdapters@RakNetSocket2@RakNet@@SAXQEAUNetworkAdapter@2@@Z
    MCAPI static void GetMyAdapters(struct RakNet::NetworkAdapter* const adapters);

    // symbol: ?GetMyIP@RakNetSocket2@RakNet@@SAXQEAUSystemAddress@2@@Z
    MCAPI static void GetMyIP(struct RakNet::SystemAddress* const addresses);

    // NOLINTEND
};

}; // namespace RakNet
