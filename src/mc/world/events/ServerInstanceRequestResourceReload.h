#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerInstanceRequestResourceReload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk7aa5da;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerInstanceRequestResourceReload& operator=(ServerInstanceRequestResourceReload const&);
    ServerInstanceRequestResourceReload(ServerInstanceRequestResourceReload const&);
    ServerInstanceRequestResourceReload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ServerInstanceRequestResourceReload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
