#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AtomicClientEntityDefinitionDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnk994f56;
    ::ll::UntypedStorage<8, 64> mUnk94902a;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    AtomicClientEntityDefinitionDescriptor& operator=(AtomicClientEntityDefinitionDescriptor const&);
    AtomicClientEntityDefinitionDescriptor(AtomicClientEntityDefinitionDescriptor const&);
    AtomicClientEntityDefinitionDescriptor();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    AtomicClientEntityDefinitionDescriptor(AtomicClientEntityDefinitionDescriptor const&);
    AtomicClientEntityDefinitionDescriptor();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::AtomicClientEntityDefinitionDescriptor& operator=(::AtomicClientEntityDefinitionDescriptor const&);

    MCNAPI ~AtomicClientEntityDefinitionDescriptor();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
