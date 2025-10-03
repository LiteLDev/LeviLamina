#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace edu::auth {

struct CredentialsRefreshSuccess {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk7f22c4;
    // NOLINTEND

public:
    // prevent constructor by default
    CredentialsRefreshSuccess& operator=(CredentialsRefreshSuccess const&);
    CredentialsRefreshSuccess(CredentialsRefreshSuccess const&);
    CredentialsRefreshSuccess();
};

} // namespace edu::auth
