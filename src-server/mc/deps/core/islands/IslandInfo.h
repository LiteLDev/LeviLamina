#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class IslandInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnke4b6cb;
    ::ll::UntypedStorage<8, 24> mUnk993fa0;
    ::ll::UntypedStorage<8, 24> mUnkce47f6;
    ::ll::UntypedStorage<8, 64> mUnke19f50;
    ::ll::UntypedStorage<8, 16> mUnk920095;
    ::ll::UntypedStorage<4, 4> mUnk3fae46;
    ::ll::UntypedStorage<4, 4> mUnka681cb;
    // NOLINTEND

public:
    // prevent constructor by default
    IslandInfo& operator=(IslandInfo const&);
    IslandInfo(IslandInfo const&);
    IslandInfo();

};

}
