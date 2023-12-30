#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct SystemAddress {
public:
    struct {
        uchar filler[0x80];
    } address;          // this+0x0
    ushort debugPort;   // this+0x80
    ushort systemIndex; // this+0x82

    [[nodiscard]] operator std::string() const { return ToString(); } // NOLINT

public:
    // NOLINTBEGIN
    // symbol: ?CopyPort@SystemAddress@RakNet@@QEAAXAEBU12@@Z
    MCAPI void CopyPort(struct RakNet::SystemAddress const& right);

    // symbol: ?EqualsExcludingPort@SystemAddress@RakNet@@QEBA_NAEBU12@@Z
    MCAPI bool EqualsExcludingPort(struct RakNet::SystemAddress const& right) const;

    // symbol: ?FixForIPVersion@SystemAddress@RakNet@@QEAAXAEBU12@@Z
    MCAPI void FixForIPVersion(struct RakNet::SystemAddress const& boundAddressToSocket);

    // symbol: ?FromString@SystemAddress@RakNet@@QEAA_NPEBDDH@Z
    MCAPI bool FromString(char const* str, char portDelineator, int ipVersion);

    // symbol: ?FromStringExplicitPort@SystemAddress@RakNet@@QEAA_NPEBDGH@Z
    MCAPI bool FromStringExplicitPort(char const* str, ushort port, int ipVersion);

    // symbol: ?GetIPPROTO@SystemAddress@RakNet@@QEBAIXZ
    MCAPI uint GetIPPROTO() const;

    // symbol: ?GetIPString@SystemAddress@RakNet@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string GetIPString() const;

    // symbol: ?GetIPVersion@SystemAddress@RakNet@@QEBAEXZ
    MCAPI uchar GetIPVersion() const;

    // symbol: ?GetPort@SystemAddress@RakNet@@QEBAGXZ
    MCAPI ushort GetPort() const;

    // symbol: ?GetPortNetworkOrder@SystemAddress@RakNet@@QEBAGXZ
    MCAPI ushort GetPortNetworkOrder() const;

    // symbol: ?IsLinkLocalAddress@SystemAddress@RakNet@@QEBA_NXZ
    MCAPI bool IsLinkLocalAddress() const;

    // symbol: ?IsLoopback@SystemAddress@RakNet@@QEBA_NXZ
    MCAPI bool IsLoopback() const;

    // symbol: ?IsMulticastAddress@SystemAddress@RakNet@@QEBA_NXZ
    MCAPI bool IsMulticastAddress() const;

    // symbol: ?SetPortHostOrder@SystemAddress@RakNet@@QEAAXG@Z
    MCAPI void SetPortHostOrder(ushort s);

    // symbol: ?SetToLoopback@SystemAddress@RakNet@@QEAAXE@Z
    MCAPI void SetToLoopback(uchar ipVersion);

    // symbol: ??0SystemAddress@RakNet@@QEAA@XZ
    MCAPI SystemAddress();

    // symbol: ??0SystemAddress@RakNet@@QEAA@PEBDG@Z
    MCAPI SystemAddress(char const* str, ushort port);

    // symbol: ?ToString@SystemAddress@RakNet@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@D@Z
    MCAPI std::string ToString(char = ':') const;

    // symbol: ?ToString@SystemAddress@RakNet@@QEBAX_NPEADD@Z
    MCAPI void ToString(bool writePort, char* dest, char portDelineator) const;

    // symbol: ??9SystemAddress@RakNet@@QEBA_NAEBU01@@Z
    MCAPI bool operator!=(struct RakNet::SystemAddress const& right) const;

    // symbol: ??MSystemAddress@RakNet@@QEBA_NAEBU01@@Z
    MCAPI bool operator<(struct RakNet::SystemAddress const& right) const;

    // symbol: ??4SystemAddress@RakNet@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct RakNet::SystemAddress& operator=(struct RakNet::SystemAddress const& input);

    // symbol: ??8SystemAddress@RakNet@@QEBA_NAEBU01@@Z
    MCAPI bool operator==(struct RakNet::SystemAddress const& right) const;

    // symbol: ?ToInteger@SystemAddress@RakNet@@SAKAEBU12@@Z
    MCAPI static ulong ToInteger(struct RakNet::SystemAddress const& sa);

    // NOLINTEND
};

}; // namespace RakNet
