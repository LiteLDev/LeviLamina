#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AtomicClientEntityDefinitionFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk62e2ee;
    ::ll::UntypedStorage<8, 264> mUnkf1f7b6;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    AtomicClientEntityDefinitionFactory& operator=(AtomicClientEntityDefinitionFactory const&);
    AtomicClientEntityDefinitionFactory(AtomicClientEntityDefinitionFactory const&);
    AtomicClientEntityDefinitionFactory();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    AtomicClientEntityDefinitionFactory& operator=(AtomicClientEntityDefinitionFactory const&);
    AtomicClientEntityDefinitionFactory(AtomicClientEntityDefinitionFactory const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI AtomicClientEntityDefinitionFactory();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
#endif
    // NOLINTEND
};
