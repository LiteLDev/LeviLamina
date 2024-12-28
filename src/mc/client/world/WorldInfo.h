#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WorldInfo {
public:
    // WorldInfo inner types define
    enum class Status : int {
        Online      = 0,
        Offline     = 1,
        Unavailable = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkf94bb0;
    ::ll::UntypedStorage<4, 4> mUnkaa8580;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldInfo& operator=(WorldInfo const&);
    WorldInfo(WorldInfo const&);
    WorldInfo();
};
