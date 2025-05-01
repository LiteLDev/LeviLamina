#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct RakNetGUID {
public:
    // member variables
    // NOLINTBEGIN
    uint64 g;
    ushort systemIndex;
    // NOLINTEND

public:
    RakNetGUID(uint64 g, ushort systemIndex) : g(g), systemIndex(systemIndex) {}

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string ToString() const;
    // NOLINTEND
};

} // namespace RakNet
