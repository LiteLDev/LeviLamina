#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MappedPorts {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnked9ea7;
    ::ll::UntypedStorage<2, 2> mUnkf404a5;
    // NOLINTEND

public:
    // prevent constructor by default
    MappedPorts& operator=(MappedPorts const&);
    MappedPorts(MappedPorts const&);
    MappedPorts();

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_S void* $ctor();
    // NOLINTEND
};
