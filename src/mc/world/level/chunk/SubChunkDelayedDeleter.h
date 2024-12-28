#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class SubChunkDelayedDeleter {
public:
    // prevent constructor by default
    SubChunkDelayedDeleter& operator=(SubChunkDelayedDeleter const&);
    SubChunkDelayedDeleter(SubChunkDelayedDeleter const&);
    SubChunkDelayedDeleter();
};
