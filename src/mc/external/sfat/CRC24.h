#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class CRC24 {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SFAT_CRC24
public:
    CRC24& operator=(CRC24 const&) = delete;
    CRC24(CRC24 const&)            = delete;
    CRC24()                        = delete;
#endif

public:
    // private:

private:
    /**
     * @symbol ?table\@CRC24\@SFAT\@\@0QBIB
     */
    MCAPI static unsigned int const table[];
};

}; // namespace SFAT
