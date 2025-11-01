#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WorldHistoryPackSourceOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk43b875;
    ::ll::UntypedStorage<8, 32> mUnk405f3f;
    ::ll::UntypedStorage<1, 1> mUnkddd3e0;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldHistoryPackSourceOptions& operator=(WorldHistoryPackSourceOptions const&);
    WorldHistoryPackSourceOptions(WorldHistoryPackSourceOptions const&);
    WorldHistoryPackSourceOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~WorldHistoryPackSourceOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
