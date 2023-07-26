#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class ISubChunkStoragePaletted {

public:
    // prevent constructor by default
    ISubChunkStoragePaletted& operator=(ISubChunkStoragePaletted const&) = delete;
    ISubChunkStoragePaletted(ISubChunkStoragePaletted const&)            = delete;
    ISubChunkStoragePaletted()                                           = delete;
};
