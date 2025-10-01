#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockCustomComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkd9ee96;
    ::ll::UntypedStorage<8, 80> mUnk12f0f1;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockCustomComponentData(BlockCustomComponentData const&);
    BlockCustomComponentData();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::BlockCustomComponentData& operator=(::BlockCustomComponentData&&);

    MCAPI ::BlockCustomComponentData& operator=(::BlockCustomComponentData const&);

    MCAPI ~BlockCustomComponentData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
