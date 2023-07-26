#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MockableOwnedBlockSource {

public:
    // prevent constructor by default
    MockableOwnedBlockSource& operator=(MockableOwnedBlockSource const&) = delete;
    MockableOwnedBlockSource(MockableOwnedBlockSource const&)            = delete;
    MockableOwnedBlockSource()                                           = delete;
};
