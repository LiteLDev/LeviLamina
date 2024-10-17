#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct SocketDescriptor {
public:
    // prevent constructor by default
    SocketDescriptor& operator=(SocketDescriptor const&);
    SocketDescriptor(SocketDescriptor const&);
    SocketDescriptor();

public:
    // NOLINTBEGIN
    MCAPI SocketDescriptor(ushort _port, char const* _hostAddress);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(ushort _port, char const* _hostAddress);

    // NOLINTEND
};

}; // namespace RakNet
