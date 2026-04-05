#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MappedPorts {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnked9ea7;
    ::ll::UntypedStorage<2, 2> mUnkf404a5;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    MappedPorts& operator=(MappedPorts const&);
    MappedPorts(MappedPorts const&);

#else // LL_PLAT_C
public:
    // prevent constructor by default
    MappedPorts& operator=(MappedPorts const&);
    MappedPorts(MappedPorts const&);
    MappedPorts();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI MappedPorts();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void* $ctor();
#endif
    // NOLINTEND
};
