#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class CRC24 {
public:
    // prevent constructor by default
    CRC24& operator=(CRC24 const&);
    CRC24(CRC24 const&);
    CRC24();

private:
    // NOLINTBEGIN
    // symbol: ?table@CRC24@SFAT@@0QBIB
    MCAPI static uint const table[];

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $table() { return table; }

    // NOLINTEND
};

}; // namespace SFAT
