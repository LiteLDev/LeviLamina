#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct UserSignInProperties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk861945;
    ::ll::UntypedStorage<1, 1>  mUnk111806;
    ::ll::UntypedStorage<4, 4>  mUnk797a9b;
    ::ll::UntypedStorage<8, 32> mUnk931d74;
    ::ll::UntypedStorage<8, 64> mUnk7c09ae;
    ::ll::UntypedStorage<8, 64> mUnk777212;
    // NOLINTEND

public:
    // prevent constructor by default
    UserSignInProperties& operator=(UserSignInProperties const&);
    UserSignInProperties(UserSignInProperties const&);
    UserSignInProperties();
};

} // namespace Social
