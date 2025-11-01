#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerMessaging {

struct SigninID {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk47e3dd;
    ::ll::UntypedStorage<8, 24> mUnkd6ad31;
    // NOLINTEND

public:
    // prevent constructor by default
    SigninID& operator=(SigninID const&);
    SigninID(SigninID const&);
    SigninID();

};

}
