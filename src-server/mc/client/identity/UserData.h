#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

class UserData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkecdab1;
    ::ll::UntypedStorage<8, 32> mUnk7543be;
    // NOLINTEND

public:
    // prevent constructor by default
    UserData& operator=(UserData const&);
    UserData(UserData const&);
    UserData();
};

} // namespace Social
