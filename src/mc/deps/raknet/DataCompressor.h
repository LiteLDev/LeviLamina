#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class DataCompressor {
public:
    // prevent constructor by default
    DataCompressor& operator=(DataCompressor const&);
    DataCompressor(DataCompressor const&);
    DataCompressor();
};

} // namespace RakNet
