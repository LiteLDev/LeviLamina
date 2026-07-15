#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct SystemAddress {
public:
    // member variables
    // NOLINTBEGIN
    union {
        ::ll::UntypedStorage<4, 128> mUnkff0e2b;
        ::ll::UntypedStorage<4, 128> mUnk3a39ae;
        ::ll::UntypedStorage<8, 128> mUnk4ff9d4;
    } address;
    ::ll::TypedStorage<2, 2, ushort> debugPort;
    ::ll::TypedStorage<2, 2, ushort> systemIndex;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool FromString(char const* str, char portDelineator, int ipVersion);

    MCAPI ::std::string GetIPString() const;

    MCAPI ::std::string ToString(char portDelineator) const;

    MCAPI void ToString(bool writePort, char* dest, char portDelineator) const;

    MCAPI bool operator==(::RakNet::SystemAddress const& right) const;
    // NOLINTEND
};

} // namespace RakNet
