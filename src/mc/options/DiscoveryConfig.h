#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DiscoveryConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkeb1a26;
    ::ll::UntypedStorage<4, 4> mUnk88d66f;
    ::ll::UntypedStorage<4, 4> mUnk810403;
    ::ll::UntypedStorage<4, 4> mUnk3a36fb;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    DiscoveryConfig& operator=(DiscoveryConfig const&);
    DiscoveryConfig(DiscoveryConfig const&);
    DiscoveryConfig();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    DiscoveryConfig& operator=(DiscoveryConfig const&);
    DiscoveryConfig(DiscoveryConfig const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI DiscoveryConfig();
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
