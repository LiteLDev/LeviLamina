#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Services {

struct AzureIdentityConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkdbc3f9;
    ::ll::UntypedStorage<8, 32> mUnkf13a47;
    ::ll::UntypedStorage<8, 32> mUnk8a183b;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    AzureIdentityConfig& operator=(AzureIdentityConfig const&);
    AzureIdentityConfig();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    AzureIdentityConfig& operator=(AzureIdentityConfig const&);
    AzureIdentityConfig(AzureIdentityConfig const&);
    AzureIdentityConfig();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI AzureIdentityConfig(::Bedrock::Services::AzureIdentityConfig const&);

    MCNAPI ~AzureIdentityConfig();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void* $ctor(::Bedrock::Services::AzureIdentityConfig const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace Bedrock::Services
