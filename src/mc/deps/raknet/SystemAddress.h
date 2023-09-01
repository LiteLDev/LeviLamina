#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct SystemAddress {
public:
    // prevent constructor by default
    SystemAddress(SystemAddress const&) = delete;

public:
    // NOLINTBEGIN
    // symbol: ?FixForIPVersion@SystemAddress@RakNet@@QEAAXAEBU12@@Z
    MCAPI void FixForIPVersion(struct RakNet::SystemAddress const&);

    // symbol: ?FromString@SystemAddress@RakNet@@QEAA_NPEBDDH@Z
    MCAPI bool FromString(char const*, char, int);

    // symbol: ?FromStringExplicitPort@SystemAddress@RakNet@@QEAA_NPEBDGH@Z
    MCAPI bool FromStringExplicitPort(char const*, ushort, int);

    // symbol: ?GetIPVersion@SystemAddress@RakNet@@QEBAEXZ
    MCAPI uchar GetIPVersion() const;

    // symbol: ?GetPort@SystemAddress@RakNet@@QEBAGXZ
    MCAPI ushort GetPort() const;

    // symbol: ?GetPortNetworkOrder@SystemAddress@RakNet@@QEBAGXZ
    MCAPI ushort GetPortNetworkOrder() const;

    // symbol: ?IsLinkLocalAddress@SystemAddress@RakNet@@QEAA_NXZ
    MCAPI bool IsLinkLocalAddress();

    // symbol: ?IsLoopback@SystemAddress@RakNet@@QEBA_NXZ
    MCAPI bool IsLoopback() const;

    // symbol: ?SetPortHostOrder@SystemAddress@RakNet@@QEAAXG@Z
    MCAPI void SetPortHostOrder(ushort);

    // symbol: ??0SystemAddress@RakNet@@QEAA@XZ
    MCAPI SystemAddress();

    // symbol: ??0SystemAddress@RakNet@@QEAA@PEBDG@Z
    MCAPI SystemAddress(char const*, ushort);

    // symbol: ?ToString@SystemAddress@RakNet@@QEBAX_NPEADD@Z
    MCAPI void ToString(bool, char*, char) const;

    // symbol: ?ToString@SystemAddress@RakNet@@QEBAPEBD_ND@Z
    MCAPI char const* ToString(bool, char) const;

    // symbol: ?ToString_Old@SystemAddress@RakNet@@QEBAX_NPEADD@Z
    MCAPI void ToString_Old(bool, char*, char) const;

    // symbol: ??9SystemAddress@RakNet@@QEBA_NAEBU01@@Z
    MCAPI bool operator!=(struct RakNet::SystemAddress const&) const;

    // symbol: ??4SystemAddress@RakNet@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct RakNet::SystemAddress& operator=(struct RakNet::SystemAddress const&);

    // symbol: ??8SystemAddress@RakNet@@QEBA_NAEBU01@@Z
    MCAPI bool operator==(struct RakNet::SystemAddress const&) const;

    // NOLINTEND
};

}; // namespace RakNet
