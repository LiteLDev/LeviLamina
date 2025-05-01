#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockCustomComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkd9ee96;
    ::ll::UntypedStorage<8, 72> mUnkde55c2;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockCustomComponentData& operator=(BlockCustomComponentData const&);
    BlockCustomComponentData(BlockCustomComponentData const&);
    BlockCustomComponentData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::BlockCustomComponentData& operator=(::BlockCustomComponentData&&);

    MCNAPI ~BlockCustomComponentData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
