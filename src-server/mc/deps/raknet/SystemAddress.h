#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct SystemAddress {
public:
    // member variables
    // NOLINTBEGIN
    union {
        ::ll::UntypedStorage<8, 128> sa_stor;
        ::ll::UntypedStorage<4, 128> addr6;
        ::ll::UntypedStorage<2, 128> addr4;
    } address;
    ::ll::TypedStorage<2, 2, ushort> debugPort;
    ::ll::TypedStorage<2, 2, ushort> systemIndex;
    // NOLINTEND

    LLNDAPI bool operator==(SystemAddress const& other) const;

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void FixForIPVersion(::RakNet::SystemAddress const& boundAddressToSocket);

    MCAPI bool FromString(char const* str, char portDelineator, int ipVersion);

    MCAPI bool FromStringExplicitPort(char const* str, ushort port, int ipVersion);

    MCAPI ::std::string GetIPString() const;

    MCAPI SystemAddress();

    MCAPI ::std::string ToString(char portDelineator) const;

    MCAPI void ToString(bool writePort, char* dest, char portDelineator) const;
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

}
