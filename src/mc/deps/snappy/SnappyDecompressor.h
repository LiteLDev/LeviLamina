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
    MCAPI bool RefillTag();

    // NOLINTEND
};

}; // namespace snappy
