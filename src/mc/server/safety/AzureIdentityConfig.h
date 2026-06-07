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

public:
    // prevent constructor by default
    AzureIdentityConfig& operator=(AzureIdentityConfig const&);
    AzureIdentityConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AzureIdentityConfig(::Bedrock::Services::AzureIdentityConfig const&);

    MCNAPI ~AzureIdentityConfig();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::Services::AzureIdentityConfig const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Services
