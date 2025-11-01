#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct SocketDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2>  mUnkb22ff8;
    ::ll::UntypedStorage<1, 32> mUnk49c06c;
    ::ll::UntypedStorage<2, 2>  mUnkd9c721;
    ::ll::UntypedStorage<2, 2>  mUnk2cd57c;
    ::ll::UntypedStorage<4, 4>  mUnkbdabaa;
    ::ll::UntypedStorage<1, 1>  mUnk4d2ea1;
    ::ll::UntypedStorage<4, 4>  mUnk5da729;
    // NOLINTEND

public:
    // prevent constructor by default
    SocketDescriptor& operator=(SocketDescriptor const&);
    SocketDescriptor(SocketDescriptor const&);
    SocketDescriptor();
};

} // namespace RakNet
