#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class Chunk {
public:
    // prevent constructor by default
    Chunk& operator=(Chunk const&);
    Chunk(Chunk const&);
    Chunk();
};

} // namespace dcsctp
