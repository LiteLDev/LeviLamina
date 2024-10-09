#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class CRC32 {
public:
    // prevent constructor by default
    CRC32& operator=(CRC32 const&);
    CRC32(CRC32 const&);
    CRC32();

    // private:
    // NOLINTBEGIN
    MCAPI static uint const table[];

    // NOLINTEND
};

}; // namespace SFAT
