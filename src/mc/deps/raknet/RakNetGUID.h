#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct RakNetGUID {
public:
    uint64 g;
    ushort systemIndex;

public:
    // NOLINTBEGIN
    MCAPI bool FromString(char const* source);

    MCAPI RakNetGUID();

    MCAPI std::string ToString() const;

    MCAPI bool operator!=(struct RakNet::RakNetGUID const& right) const;

    MCAPI bool operator==(struct RakNet::RakNetGUID const& right) const;

    MCAPI static ulong ToUint32(struct RakNet::RakNetGUID const& g);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    // NOLINTEND
};

}; // namespace RakNet
