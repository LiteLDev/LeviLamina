#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class CRC24 {

public:
    // prevent constructor by default
    CRC24& operator=(CRC24 const&) = delete;
    CRC24(CRC24 const&)            = delete;
    CRC24()                        = delete;

private:
    // NOLINTBEGIN
    /**
     * @symbol ?table\@CRC24\@SFAT\@\@0QBIB
     */
    MCAPI static unsigned int const table[];
    // NOLINTEND
};

}; // namespace SFAT
