#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace edu::auth {

struct CredentialsAcquired {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnke1a974;
    ::ll::UntypedStorage<8, 32> mUnk7669a6;
    ::ll::UntypedStorage<8, 32> mUnkc7f820;
    ::ll::UntypedStorage<8, 32> mUnka9fac3;
    ::ll::UntypedStorage<8, 32> mUnk8b0d69;
    ::ll::UntypedStorage<1, 1>  mUnk7e4275;
    // NOLINTEND

public:
    // prevent constructor by default
    CredentialsAcquired& operator=(CredentialsAcquired const&);
    CredentialsAcquired(CredentialsAcquired const&);
    CredentialsAcquired();
};

} // namespace edu::auth
