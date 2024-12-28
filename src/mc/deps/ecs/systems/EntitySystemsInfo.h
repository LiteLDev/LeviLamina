#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EntitySystemsInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkcfab69;
    ::ll::UntypedStorage<8, 24> mUnka86afd;
    ::ll::UntypedStorage<8, 24> mUnk11fb92;
    // NOLINTEND

public:
    // prevent constructor by default
    EntitySystemsInfo& operator=(EntitySystemsInfo const&);
    EntitySystemsInfo(EntitySystemsInfo const&);
    EntitySystemsInfo();
};
