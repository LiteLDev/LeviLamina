#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class CRC16 {
public:
    // prevent constructor by default
    CRC16& operator=(CRC16 const&);
    CRC16(CRC16 const&);
    CRC16();

    // private:
    // NOLINTBEGIN
    // symbol: ?table@CRC16@SFAT@@0QBIB
    MCAPI static uint const table[];

    // NOLINTEND
};

}; // namespace SFAT
