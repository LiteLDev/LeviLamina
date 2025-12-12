#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct RemoteClient {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk4c556f;
    ::ll::UntypedStorage<8, 136> mUnk15dcb5;
    ::ll::UntypedStorage<8, 24>  mUnk5eab4b;
    ::ll::UntypedStorage<1, 1>   mUnk582874;
    ::ll::UntypedStorage<8, 40>  mUnkdd2d6b;
    ::ll::UntypedStorage<8, 40>  mUnke2d806;
    // NOLINTEND

public:
    // prevent constructor by default
    RemoteClient& operator=(RemoteClient const&);
    RemoteClient(RemoteClient const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RemoteClient();

    MCAPI void SendOrBuffer(char const** data, uint const* lengths, int numParameters);

    MCAPI ~RemoteClient();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace RakNet
