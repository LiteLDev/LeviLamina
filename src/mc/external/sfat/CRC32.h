#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class CRC32 {
public:
    // prevent constructor by default
    CRC32& operator=(CRC32 const&) = delete;
    CRC32(CRC32 const&)            = delete;
    CRC32()                        = delete;

private:
    // NOLINTBEGIN
    // symbol: ?table@CRC32@SFAT@@0QBIB
    MCAPI static uint const table[];

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    inline auto& $table() { return table; }

    // NOLINTEND
};

}; // namespace SFAT
