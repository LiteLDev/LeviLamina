#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct UserCreationData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk926906;
    ::ll::UntypedStorage<4, 4> mUnkb99256;
    ::ll::UntypedStorage<8, 16> mUnkdd23f7;
    ::ll::UntypedStorage<4, 4> mUnk3d9480;
    // NOLINTEND

public:
    // prevent constructor by default
    UserCreationData& operator=(UserCreationData const&);
    UserCreationData(UserCreationData const&);
    UserCreationData();

};

}
