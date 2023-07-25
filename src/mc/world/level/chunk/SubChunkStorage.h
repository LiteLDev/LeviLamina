#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class SubChunkStorage {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBCHUNKSTORAGE
public:
    SubChunkStorage& operator=(SubChunkStorage const&) = delete;
    SubChunkStorage(SubChunkStorage const&)            = delete;
    SubChunkStorage()                                  = delete;
#endif

public:
};
