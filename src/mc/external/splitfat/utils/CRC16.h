#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class CRC16 {
public:
    // prevent constructor by default
    CRC16& operator=(CRC16 const&);
    CRC16(CRC16 const&);
    CRC16();

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static auto table() -> uint const (&)[];

    // NOLINTEND
};

}; // namespace SFAT
