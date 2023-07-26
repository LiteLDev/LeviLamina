#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class CRC32 {

public:
    // prevent constructor by default
    CRC32& operator=(CRC32 const&) = delete;
    CRC32(CRC32 const&)            = delete;
    CRC32()                        = delete;

    // private:

private:
    /**
     * @symbol ?table\@CRC32\@SFAT\@\@0QBIB
     */
    MCAPI static unsigned int const table[]; // NOLINT
};

}; // namespace SFAT
