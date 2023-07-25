#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace snappy {

class SnappyDecompressor {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SNAPPY_SNAPPYDECOMPRESSOR
public:
    SnappyDecompressor& operator=(SnappyDecompressor const&) = delete;
    SnappyDecompressor(SnappyDecompressor const&)            = delete;
    SnappyDecompressor()                                     = delete;
#endif

public:
    // private:
    /**
     * @symbol ?RefillTag\@SnappyDecompressor\@snappy\@\@AEAA_NXZ
     */
    MCAPI bool RefillTag();

private:
};

}; // namespace snappy
