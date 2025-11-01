#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LocalPlayerChangedConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk27af58;
    ::ll::UntypedStorage<8, 8> mUnk6d5e5b;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalPlayerChangedConnector& operator=(LocalPlayerChangedConnector const&);
    LocalPlayerChangedConnector(LocalPlayerChangedConnector const&);
    LocalPlayerChangedConnector();
};
