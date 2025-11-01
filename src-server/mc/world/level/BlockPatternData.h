#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockPatternData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk5da3e8;
    ::ll::UntypedStorage<8, 56> mUnk52423e;
    ::ll::UntypedStorage<4, 4> mUnkc50dd9;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPatternData& operator=(BlockPatternData const&);
    BlockPatternData(BlockPatternData const&);
    BlockPatternData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BlockPatternData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
