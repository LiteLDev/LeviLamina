#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MockableOwnedBlockSource {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOCKABLEOWNEDBLOCKSOURCE
public:
    MockableOwnedBlockSource& operator=(MockableOwnedBlockSource const&) = delete;
    MockableOwnedBlockSource(MockableOwnedBlockSource const&)            = delete;
    MockableOwnedBlockSource()                                           = delete;
#endif

public:
};
