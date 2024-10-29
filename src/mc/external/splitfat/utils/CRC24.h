#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class CRC24 {
public:
    // prevent constructor by default
    CRC24& operator=(CRC24 const&);
    CRC24(CRC24 const&);
    CRC24();

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static auto table() -> uint const (&)[];

    // NOLINTEND
};

}; // namespace SFAT
