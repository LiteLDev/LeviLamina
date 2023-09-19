#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace snappy {

class SnappyDecompressor {
public:
    // prevent constructor by default
    SnappyDecompressor& operator=(SnappyDecompressor const&);
    SnappyDecompressor(SnappyDecompressor const&);
    SnappyDecompressor();

    // private:
    // NOLINTBEGIN
    // symbol: ?RefillTag@SnappyDecompressor@snappy@@AEAA_NXZ
    MCAPI bool RefillTag();

    // NOLINTEND
};

}; // namespace snappy
