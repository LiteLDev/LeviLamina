#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct SystemAddress {
public:
    // prevent constructor by default
    SystemAddress(SystemAddress const&);

public:
    // NOLINTBEGIN
    MCAPI void CopyPort(struct RakNet::SystemAddress const& right);

    MCAPI bool EqualsExcludingPort(struct RakNet::SystemAddress const& right) const;

    MCAPI void FixForIPVersion(struct RakNet::SystemAddress const& boundAddressToSocket);

    MCAPI bool FromString(char const* str, char portDelineator, int ipVersion);

    MCAPI bool FromStringExplicitPort(char const* str, ushort port, int ipVersion);

    MCAPI uint GetIPPROTO() const;

    MCAPI std::string GetIPString() const;

    MCAPI uchar GetIPVersion() const;

    MCAPI ushort GetPort() const;

    MCAPI ushort GetPortNetworkOrder() const;

    MCAPI bool IsLinkLocalAddress() const;

    MCAPI bool IsLoopback() const;

    MCAPI bool IsMulticastAddress() const;

    MCAPI void SetPortHostOrder(ushort s);

    MCAPI void SetToLoopback(uchar ipVersion);

    MCAPI SystemAddress();

    MCAPI SystemAddress(char const* str, ushort port);

    MCAPI std::string ToString(char portDelineator) const;

    MCAPI void ToString(bool writePort, char* dest, char portDelineator) const;

    MCAPI bool operator!=(struct RakNet::SystemAddress const& right) const;

    MCAPI bool operator<(struct RakNet::SystemAddress const& right) const;

    MCAPI struct RakNet::SystemAddress& operator=(struct RakNet::SystemAddress const& input);

    MCAPI bool operator==(struct RakNet::SystemAddress const& right) const;

    MCAPI static ulong ToInteger(struct RakNet::SystemAddress const& sa);

    // NOLINTEND
};

}; // namespace RakNet
