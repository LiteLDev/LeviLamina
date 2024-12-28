#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct SystemAddress {
public:
    // member variables
    // NOLINTBEGIN
    union {
        ::ll::UntypedStorage<8, 128> mUnk4ff9d4;
        ::ll::UntypedStorage<4, 128> mUnk3a39ae;
        ::ll::UntypedStorage<2, 128> mUnkff0e2b;
    } address;
    ::ll::TypedStorage<2, 2, ushort> debugPort;
    ::ll::TypedStorage<2, 2, ushort> systemIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    SystemAddress(SystemAddress const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void CopyPort(::RakNet::SystemAddress const& right);

    MCAPI bool EqualsExcludingPort(::RakNet::SystemAddress const& right) const;

    MCAPI void FixForIPVersion(::RakNet::SystemAddress const& boundAddressToSocket);

    MCAPI bool FromString(char const* str, char portDelineator, int ipVersion);

    MCAPI bool FromStringExplicitPort(char const* str, ushort port, int ipVersion);

    MCAPI uint GetIPPROTO() const;

    MCAPI ::std::string GetIPString() const;

    MCAPI uchar GetIPVersion() const;

    MCAPI ushort GetPort() const;

    MCAPI ushort GetPortNetworkOrder() const;

    MCAPI bool IsLinkLocalAddress() const;

    MCAPI bool IsLoopback() const;

    MCAPI bool IsMulticastAddress() const;

    MCAPI void SetPortHostOrder(ushort s);

    MCAPI void SetToLoopback(uchar ipVersion);

    MCAPI SystemAddress();

    MCAPI ::std::string ToString(char portDelineator) const;

    MCAPI void ToString(bool writePort, char* dest, char portDelineator) const;

    MCAPI bool operator!=(::RakNet::SystemAddress const& right) const;

    MCAPI bool operator<(::RakNet::SystemAddress const& right) const;

    MCAPI ::RakNet::SystemAddress& operator=(::RakNet::SystemAddress const& input);

    MCAPI bool operator==(::RakNet::SystemAddress const& right) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ulong ToInteger(::RakNet::SystemAddress const& sa);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};

} // namespace RakNet
