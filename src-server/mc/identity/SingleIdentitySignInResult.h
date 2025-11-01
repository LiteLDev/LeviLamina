#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct SingleIdentitySignInResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk441039;
    ::ll::UntypedStorage<1, 1>  mUnk70bb45;
    ::ll::UntypedStorage<8, 32> mUnkc35979;
    // NOLINTEND

public:
    // prevent constructor by default
    SingleIdentitySignInResult& operator=(SingleIdentitySignInResult const&);
    SingleIdentitySignInResult(SingleIdentitySignInResult const&);
    SingleIdentitySignInResult();
};

} // namespace Social
