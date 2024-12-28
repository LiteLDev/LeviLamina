#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RopeWave {
public:
    // RopeWave inner types define
    enum class Direction : int {
        StartToEnd = 0,
        EndToStart = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk9e6388;
    ::ll::UntypedStorage<4, 4>  mUnk4b458c;
    ::ll::UntypedStorage<4, 4>  mUnkf82952;
    ::ll::UntypedStorage<8, 8>  mUnk7bd9c0;
    ::ll::UntypedStorage<4, 4>  mUnk7f88f8;
    ::ll::UntypedStorage<4, 4>  mUnk358ce3;
    // NOLINTEND

public:
    // prevent constructor by default
    RopeWave& operator=(RopeWave const&);
    RopeWave(RopeWave const&);
    RopeWave();
};
