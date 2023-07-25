#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class CRC32 {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SFAT_CRC32
public:
    CRC32& operator=(CRC32 const&) = delete;
    CRC32(CRC32 const&)            = delete;
    CRC32()                        = delete;
#endif

public:
    // private:

private:
    /**
     * @symbol ?table\@CRC32\@SFAT\@\@0QBIB
     */
    MCAPI static unsigned int const table[];
};

}; // namespace SFAT
