#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class CRC16 {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SFAT_CRC16
public:
    CRC16& operator=(CRC16 const&) = delete;
    CRC16(CRC16 const&)            = delete;
    CRC16()                        = delete;
#endif

public:
    // private:

private:
    /**
     * @symbol ?table\@CRC16\@SFAT\@\@0QBIB
     */
    MCAPI static unsigned int const table[];
};

}; // namespace SFAT
