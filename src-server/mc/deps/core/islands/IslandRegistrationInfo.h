#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class IslandRegistrationInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk5bdc23;
    ::ll::UntypedStorage<8, 32> mUnk35905c;
    ::ll::UntypedStorage<8, 24> mUnk18e37f;
    ::ll::UntypedStorage<8, 8> mUnkcc6be6;
    // NOLINTEND

public:
    // prevent constructor by default
    IslandRegistrationInfo& operator=(IslandRegistrationInfo const&);
    IslandRegistrationInfo(IslandRegistrationInfo const&);
    IslandRegistrationInfo();

};

}
