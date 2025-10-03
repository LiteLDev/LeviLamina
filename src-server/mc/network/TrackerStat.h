#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TrackerStat {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk9416ad;
    ::ll::UntypedStorage<4, 4>  mUnk9c82e2;
    ::ll::UntypedStorage<4, 4>  mUnkff9a49;
    ::ll::UntypedStorage<4, 4>  mUnkcec4f8;
    ::ll::UntypedStorage<4, 4>  mUnk4894a5;
    ::ll::UntypedStorage<8, 64> mUnk3d6211;
    ::ll::UntypedStorage<8, 64> mUnkd1c357;
    // NOLINTEND

public:
    // prevent constructor by default
    TrackerStat& operator=(TrackerStat const&);
    TrackerStat(TrackerStat const&);
    TrackerStat();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TrackerStat();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
