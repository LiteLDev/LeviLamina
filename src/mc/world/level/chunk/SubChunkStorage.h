#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class SubChunkStorage {
public:
    uint16_t mElements[1368]; // this+0x8
    T0*      mTypes;          // this+0xAB8
public:
    // prevent constructor by default
    SubChunkStorage& operator=(SubChunkStorage const&);
    SubChunkStorage(SubChunkStorage const&);
    SubChunkStorage();
};
