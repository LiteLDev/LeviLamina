#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class CRC16 {

public:
    // prevent constructor by default
    CRC16& operator=(CRC16 const&) = delete;
    CRC16(CRC16 const&)            = delete;
    CRC16()                        = delete;

    // private:

private:
    /**
     * @symbol ?table\@CRC16\@SFAT\@\@0QBIB
     */
    MCAPI static unsigned int const table[]; // NOLINT
};

}; // namespace SFAT
