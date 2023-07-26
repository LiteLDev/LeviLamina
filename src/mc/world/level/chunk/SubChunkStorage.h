#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class SubChunkStorage {

public:
    // prevent constructor by default
    SubChunkStorage& operator=(SubChunkStorage const&) = delete;
    SubChunkStorage(SubChunkStorage const&)            = delete;
    SubChunkStorage()                                  = delete;
};
