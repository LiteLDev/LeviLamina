#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Identity {

struct AuthError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkbb3fdd;
    ::ll::UntypedStorage<4, 8> mUnkf663fa;
    ::ll::UntypedStorage<4, 8> mUnk94f526;
    ::ll::UntypedStorage<8, 64> mUnkd0ee26;
    // NOLINTEND

public:
    // prevent constructor by default
    AuthError& operator=(AuthError const&);
    AuthError(AuthError const&);
    AuthError();

};

}
