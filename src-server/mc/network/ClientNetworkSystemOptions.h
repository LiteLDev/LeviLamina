#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClientNetworkSystemOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk6dbb9b;
    ::ll::UntypedStorage<8, 8> mUnk267adf;
    ::ll::UntypedStorage<8, 8> mUnke5b3d0;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientNetworkSystemOptions& operator=(ClientNetworkSystemOptions const&);
    ClientNetworkSystemOptions(ClientNetworkSystemOptions const&);
    ClientNetworkSystemOptions();
};
