#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MockableOwnedBlockSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>   mUnk49fc51;
    ::ll::UntypedStorage<8, 272> mUnk261323;
    // NOLINTEND

public:
    // prevent constructor by default
    MockableOwnedBlockSource& operator=(MockableOwnedBlockSource const&);
    MockableOwnedBlockSource(MockableOwnedBlockSource const&);
    MockableOwnedBlockSource();
};
