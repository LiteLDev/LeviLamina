#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct IdentitySignInProperties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk69732c;
    ::ll::UntypedStorage<1, 1> mUnked4909;
    ::ll::UntypedStorage<4, 4> mUnka2ec2e;
    ::ll::UntypedStorage<8, 32> mUnk6d9dd3;
    ::ll::UntypedStorage<8, 64> mUnk22810d;
    ::ll::UntypedStorage<8, 64> mUnkf6d032;
    // NOLINTEND

public:
    // prevent constructor by default
    IdentitySignInProperties& operator=(IdentitySignInProperties const&);
    IdentitySignInProperties(IdentitySignInProperties const&);
    IdentitySignInProperties();

};

}
