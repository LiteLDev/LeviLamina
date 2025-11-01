#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Services {

struct AzureIdentityConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk89fe6c;
    ::ll::UntypedStorage<8, 32> mUnkad6937;
    ::ll::UntypedStorage<8, 32> mUnk737f2b;
    // NOLINTEND

public:
    // prevent constructor by default
    AzureIdentityConfig& operator=(AzureIdentityConfig const&);
    AzureIdentityConfig(AzureIdentityConfig const&);
    AzureIdentityConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AzureIdentityConfig();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
