#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockStateMeta {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk950d25;
    ::ll::UntypedStorage<8, 8>   mUnk7ff3df;
    ::ll::UntypedStorage<8, 128> mUnk564759;
    ::ll::UntypedStorage<8, 8>   mUnk83d225;
    ::ll::UntypedStorage<8, 32>  mUnke3cd6e;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockStateMeta& operator=(BlockStateMeta const&);
    BlockStateMeta(BlockStateMeta const&);
    BlockStateMeta();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int indexOf(uint64 const& h) const;
    // NOLINTEND
};
