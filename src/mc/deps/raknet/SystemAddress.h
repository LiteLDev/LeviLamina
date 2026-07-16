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
    ushort debugPort;
    ushort systemIndex;
    // NOLINTEND

public:
    LLNDAPI bool operator==(SystemAddress const& other) const;

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool FromString(char const* str, char portDelineator, int ipVersion);

    MCAPI ::std::string GetIPString() const;

    MCAPI ::std::string ToString(char portDelineator) const;

    MCAPI void ToString(bool writePort, char* dest, char portDelineator) const;
    // NOLINTEND
};

} // namespace RakNet
